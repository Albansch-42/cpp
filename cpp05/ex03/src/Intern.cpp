#include "Intern.hpp"

Intern::Intern()
{}
Intern::~Intern()
{}
AForm *Intern::makeForm(std::string Name, std::string Target)
{
    std::map <std::string, AForm *> tab;
    tab["shrubbery creation"] = new ShrubberyCreationForm(Target);
    tab["robotomy request"] = new RobotomyRequestForm(Target);
    tab["presidential pardon"] = new PresidentialPardonForm(Target);

    std::transform(Name.begin(), Name.end(), Name.begin(), ::tolower);

    AForm *result = NULL;
    for (std::map <std::string, AForm *>::iterator it = tab.begin(); it != tab.end(); ++it) 
    {
        if (it->first == Name){ 
            result = it->second;
            std::cout << "Intern creates " << Name << std::endl;
        }
        else
            delete it->second;
    }
    if (result == NULL)
        std::cout << "Intern cannot create " << Name << " form" << std::endl;
    return result;

}