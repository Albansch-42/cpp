
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
                ~Intern();
                AForm *makeForm(std::string Name, std::string Target);
};

#endif