#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    _Name = "";
    _Grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat default constructor called." << std::endl;
    _Name = name;
    _Grade = grade;
}
