#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{ 

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
    if (it == datedValues.end())
    {
        if (it == datedValues.begin())
            throw (std::runtime_error("Error: no valid rate for the given date."));
        --it;
    }
    return it->second;
}

bool BitcoinExchange::dateIsValid(const std::string& date) const
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (!isdigit(date[i]) && i != 4 && i != 7)
                return false;
    }
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

void BitcoinExchange::printMap(std::string date)
{
        std::cout << datedValues[date] << std::endl;
}