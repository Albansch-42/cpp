#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::~ScalarConverter()
{
	 // std::cout << "Destructor called" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter&other)
{
	(void)other;
	 // std::cout << "Recopy constructor called" << std::endl;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
	// std::cout << "Assignment operator called" << std::endl;
}

int	is_int(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
	{
		if (!isdigit(s[i]))
			return (1);
	}
	return 1;
}

void ScalarConverter::convert(std::string s)
{
	if (is_int(s)){
		int n = atof(s.c_str());
		if (n < 0 || n > 127)
			std::cout << "char: impossible" << std::endl;
		else if (n < 32 || n == 127)
			std::cout << "char: non-displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		std::cout << "int: " << n << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << n << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << n << std::endl;
	}
	
}
