#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange::~BitcoinExchange()
{ 

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        this->datedValues = other.datedValues;
    }
    return (*this);
}

void BitcoinExchange::loadDataBase(const std::string filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Error: could not open file.");
    
    std::string line, date;
    float       value;

    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        if (std::getline(ss, date, ',') && ss >> value)
            datedValues[date] = value;
    }
}

float BitcoinExchange::getRate(const std::string& date) const
{
    std::map<std::string, float>::const_iterator it = datedValues.lower_bound(date);
    if (it == datedValues.end() || (it->first != date && it != datedValues.begin()))
        --it;
    return it->second;
}

bool BitcoinExchange::dateIsValid(const std::string& date) const
{
    if (date.length() != 11 || date[4] != '-' || date[7] != '-' || date[date.length() - 1] != ' ')
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (!isdigit(date[i]) && i != 4 && i != 7)
                return false;
    }
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (year < 2009)
        return (false);

    if (month < 1 || month > 12)
        return false;

    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
        daysInMonth[1] = 29;

    if (day < 1 || day > daysInMonth[month - 1])
        return false;

    return true;
}

bool BitcoinExchange::valueIsValid(float value) const
{
    if (value > 1000)
        return (std::cout << "Error: too large a number." << std::endl, false);
    else if (value < 0)
        return(std::cout << "Error: not a positive number." << std::endl, false);
    return (true);
}

void BitcoinExchange::checkRate(BitcoinExchange& btc, const std::string& path) const
{
    std::fstream input(path.c_str());
    if (!input.is_open())
        throw (std::runtime_error("Error: could not open input_file."));
    std::string line, date;
    float number;
    while (getline(input, line))
    {
        if (!line.empty())
        {
            if (line.find('|') != 11)
            {
                std::cout << "Invalid format." << std::endl;
                continue ;
            }
            std::istringstream ss(line);
            getline(ss, date, '|');
            if (btc.dateIsValid(date))
            {
                if (ss.peek() != ' ')
                {
                    std::cout << "Invalid format." << std::endl;
                    continue ;
                }
                ss >> number;
                if (!ss.fail() && ss.eof())
                {
                    if (btc.valueIsValid(number))
                        std::cout << date << " => " << number << " = " << (number * btc.getRate(date)) << std::endl;
                }
                else
                    std::cout << "Not a valid number: " << number << std::endl; 
            }
            else
                std::cout << "Not a valid date: " << date << std::endl; 
        }
    }
}