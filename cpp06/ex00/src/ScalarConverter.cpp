#include "inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter&other)
{
	std::cout << "Recopy constructor called" << std::endl;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	std::cout << "Assignment operator called" << std::endl;
}
