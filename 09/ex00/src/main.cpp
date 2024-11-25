#include "BitcoinExchange.hpp"

int main(int argc, char**argv)
{
    if (argc != 2)
        return (std::cerr << "Error: could not open file." << std::endl, -1);
    try 
    {
        BitcoinExchange btc;
        btc.loadDataBase("../data.csv");

        std::fstream input(argv[1]);
        if (!input.is_open())
            throw (std::runtime_error("Error: could not open input_file."));
        std::string line, date;
        float value, number;
        while (getline(input, line))
        {
            std::istringstream ss(line);
            getline(ss, date, '|');
            date = date.substr(0, 10);
            if (btc.dateIsValid(date))
            {
                value = btc.getRate(date);
                ss >> number;
                if (btc.valueIsValid(number))
                    std::cout << date << " => " << number << " = " << (number * value) << std::endl; 
            }
            else
                std::cout << "Not a valid date: " << date << std::endl; 
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}