#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "Default constructor called" << std::endl;
}
BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Destructor called" << std::endl;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange&other)
{
	std::cout << "Recopy constructor called" << std::endl;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	std::cout << "Assignment operator called" << std::endl;
}
