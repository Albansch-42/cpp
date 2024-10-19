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
	int random_number = (std::rand() % 2);
	if (random_number)
		std::cout << _Target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy failed." << std::endl;
}