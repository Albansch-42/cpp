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
	for (size_t i = 1; i < s.length(); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	if (s[0] && (isdigit(s[0]) || s[0] == '-' || s[0] == '+'))
		return 1;
	return 0;
}

int is_char(std::string s)
{
	if (s.length() == 1 && !isdigit(s[0]))
		return 1;
	return 0;
}

int is_float(std::string s)
{
	if (s == "-inff" || s == "+inff" || s == "nanf")
		return 1;
	if ( s.find( '.' ) == std::string::npos || s[s.length() - 1] != 'f' || s[s.length() - 2] == '.' )
		return false;
	bool point = false;
	for (size_t i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == '.')
		{
			if (point)
				return 0;
			point = true;
		}
		else if (!isdigit(s[i]))
			return 0;
	}
	return 1;
}

int is_double(std::string s)
{
	if (s == "-inf" || s == "+inf" || s == "nan")
		return 1;
	if ( s.find( '.' ) == std::string::npos || s[s.length() - 1] == '.' )
		return 0;
	bool point = false;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			if (point)
				return 0;
			point = true;
		}
		else if (!isdigit(s[i]))
			return 0;
	}
	return 1;
}

void Display_inf(std::string s)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << s << 'f' << std::endl;
	std::cout << "double: "<< s << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	if (is_int(s))
	{
		double n = atof(s.c_str());
		if (n < 0 || n > 127)
			std::cout << "char: impossible" << std::endl;
		else if (n < 32 || n == 127)
			std::cout << "char:  Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		if (n < -2147483648 || n >= 2147483648)
			std::cout << "int: impossible"<< std::endl;
		else
			std::cout << "int: " << n << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << n << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << n << std::endl;
	}
	else if (is_char(s))
	{
		char c = s[0];
		if (c < 32 || c == 127)
			std::cout << "char: non-displayable" << std::endl;
		else
			std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(c) << std::endl;
	}
	else if (is_float(s))
	{
		if (s.compare("-inff") == 0 || s.compare("+inff") == 0 || s.compare("nanf") == 0){
			s[s.length() - 1] = 0;
			Display_inf(s);
			return ;
		}
		float d = static_cast<float>(atof(s.c_str()));
		if (d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
		else if (d < 32 || d == 127)
			std::cout << "char:  Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		if (d < -2147483648 || d >= 2147483648)
			std::cout << "int: impossible"<< std::endl;
		else
			std::cout << "int: " << d << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << d << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(d) << std::endl;
	}
	else if (is_double(s))
	{
		if (s.compare("-inf") == 0 || s.compare("+inf") == 0 || s.compare("nan") == 0){
			Display_inf(s);
			return ;
		}
		double d = atof(s.c_str());
		if (d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
		else if (d < 32 || d == 127)
			std::cout << "char:  Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		if (d < -2147483648 || d >= 2147483648)
			std::cout << "int: impossible"<< std::endl;
		else
			std::cout << "int: " << d << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << d << std::endl;

	}
}
