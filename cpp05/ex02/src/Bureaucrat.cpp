#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _Name("Bureaucrat Default"), _Grade(150) {}
Bureaucrat::~Bureaucrat(void) {}

std::string const Bureaucrat::getName() const { return _Name; }
int Bureaucrat::getGrade() const { return _Grade; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _Name(b.getName()), _Grade(b.getGrade())
{ }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this != &b)
        this->_Grade = b.getGrade();

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

void Bureaucrat::incrementGrade()
{
    if (_Grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _Grade--;
}
void Bureaucrat::decrementDownGrade()
{
    if (_Grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _Grade++;
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << _Name << " signs " << f.getName() << std::endl;
    }
    catch(const std::exception& e) 
    {
        std::cout << _Name << " couldn’t sign " << f.getName() << " because the grade is too low" << std::endl;
    }   
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "The grade is too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "The grade is too low !";
}