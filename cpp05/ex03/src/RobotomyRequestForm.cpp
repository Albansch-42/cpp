#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _Target("Default target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _Target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->AForm::operator=(other);
    this->_Target = other._Target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    ToExecute(executor);
    std::cout << "VRRRRR..VRRR.VRRRRRRRRRR." << std::endl;
    std::srand(std::time(NULL));
	int random_number = (std::rand() % 2);
	if (random_number == 0)
		std::cout << _Target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _Target << " has not been robotomized successfully." << std::endl;
}