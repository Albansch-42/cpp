#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <cstdlib> 

class BitcoinExchange
{ 
    private :
        std::string _fileCSV;
        std::map<std::string, double> _tab;
    public :
        BitcoinExchange(std::string s);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);

        int loadCSV();
};

// std::ostream& operator<<(std::ostream& os, const BitcoinExchange& other);

#endif 
