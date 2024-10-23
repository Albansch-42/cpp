
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <map>
#include <algorithm>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private :
        
	public :
                Intern();
                Intern(const Intern &other);
                Intern& operator=(const Intern &other);
                ~Intern();
                AForm *makeForm(std::string Name, std::string Target);

                AForm *Shrubbery(std::string Target);
                AForm *Robotomy(std::string Target);
                AForm *Presidential(std::string Target);
};

#endif