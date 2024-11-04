#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string s1, std::string s2)
{
	_fileCSV = s1;
	_fileInput = s2;
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
        std::cerr << "Error: can't open " << _fileCSV << std::endl;
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

int	all_digit(std::string year, std::string month, std::string day, std::string value)
{
	// std::cout << year << " " << std::endl;
	for (size_t i = 0; i < year.length(); i++) {
		if (!isdigit(year[i])){
			// std::cout << "year" << std::endl;
			return 1;
		}
	}
	for (size_t i = 0; i < month.length(); i++) {
		if (!isdigit(month[i]) || !isdigit(day[i])){
			// std::cout << "month" << std::endl;
			return 1;
		}
	}
	for (size_t i = 0; i < value.length(); i++) {
		if (!isdigit(value[i]) && value[i] != '.'){
			// std::cout << "value" << std::endl;
			return 1;
		}
	}
	return 0;
}

int verif_date(std::string date)
{
	if (date.length() != 11  ) {
		std::cout << "leght " << std::endl;
        return 1;
    }

	if (date[4] != '-' || date[7] != '-')
	{
		std::cout << "-------" << std::endl;
        return 1;
    }

    for (std::size_t i = 0; i < 10; i++) {
        if (i == 4 || i == 7) 
            continue; 
        if (!std::isdigit(date[i]))
		{
            return 1;
		}
    }

    int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
    int month =  (date[5] - '0') * 10 + (date[6] - '0');
    int day =  (date[8] - '0') * 10 + (date[9] - '0');

    if (month < 1 || month > 12)
	{
		std::cout << month << std::endl;
        return 1;
    }

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
		std::cout << day << std::endl;
        return 1;
    }

    return 0;
}

double	verif_value(std::string value)
{
	double n = std::atof(value.c_str());
	if (n < 0 || n > 2147483647)
		return 0;
	return n;
}

void BitcoinExchange::print()
{
	std::ifstream file(_fileInput.c_str());
	if (!file) {
        std::cerr << "Error: could not open file: " << _fileInput << std::endl;
        exit (1);
    }
	std::string line;
	std::string date;
	std::string value;
	int n;
	std::size_t index = 1;
	std::getline(file, line);
	
	
	while (std::getline(file, line) ) {
		index++;
		n = line.find('|');
		if (n == -1 || static_cast<size_t>(n + 2) >= line.length()) {
			std::cerr << "Error: Line " << index << " is invalid" << std::endl;
			continue;
		}
		date = line.substr(0, n);
		value = line.substr(n + 2);
		if (verif_date(date )) {
			std::cerr << "Error: Line " << index << " is invalid" << std::endl;
			continue;
		}
		int nb = verif_value(value);
		if (nb == 0) {
			std::cerr << "Error: Line " << index << " is invalid" << std::endl;
			continue;
		}
		double
    }
}
