#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <limits>
#include <cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string, float> datedValues;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);

        BitcoinExchange& operator=(const BitcoinExchange& other);

        ~BitcoinExchange();
        
        void loadDataBase(const std::string filename);
        float getRate(const std::string& date) const;

        bool dateIsValid(const std::string& date) const;
        bool valueIsValid(float value) const;

        void checkRate(BitcoinExchange& btc, const std::string& path) const;
        
};

#endif