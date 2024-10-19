
#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private :
        std::string _Target;
    
    public :
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &f);
        virtual ~PresidentialPardonForm();
        
        void execute(Bureaucrat const & executor) const;
};

#endif