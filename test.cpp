#include <iostream>
#include <string>
#include <cctype>

bool isValidDateFormat(const std::string& date) {
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        return 1;
    }

    for (int i = 0; i < date.length(); i++) {
        if (i == 4 || i == 7) 
            continue; 
        if (!std::isdigit(date[i])) 
            return 1;
    }

    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));

    if (month < 1 || month > 12)
        return 1;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        return 1;
    }

    return 0;
}

int main(int ac, char **argv) {
    std::string date = "2024-04-01";

    if (isValidDateFormat(argv[1])) {
        std::cout << "VALIDE" << std::endl;
    } else {
        std::cout << "NON-VALIDE" << std::endl;
    }

    return 0;
}