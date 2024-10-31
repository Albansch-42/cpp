#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string s)
{
	_fileCSV = s;
	// std::cout << "Default constructor called" << std::endl;
}
BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "Destructor called" << std::endl;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange&other)
{
	(void)other;
	// std::cout << "Recopy constructor called" << std::endl;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	(void)other;
	return *this;
	// std::cout << "Assignment operator called" << std::endl;
}

int BitcoinExchange::loadCSV()
{
	std::ifstream file(_fileCSV.c_str());
    if (!file) {
        std::cerr << "Can't open " << _fileCSV << std::endl;
        return 1;
    }

    std::string line;
	std::string date;
	std::string value;
	std::size_t n;
	std::getline(file, line);
    while (std::getline(file, line)) {
		n = line.find(',');
		date = line.substr(0, n);
		value = line.substr(n + 1, line.length());
		_tab[date] = std::strtod(value.c_str(), NULL);
    }
    file.close();
	return 0;
}
