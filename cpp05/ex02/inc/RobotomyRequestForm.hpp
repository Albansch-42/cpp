
#ifndef ROBOTONYREQUESTFORM_HPP
# define ROBOTONYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private :
        std::string _Target;
    
    public :
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &f);
        virtual ~RobotomyRequestForm();
        
        void execute(Bureaucrat const & executor) const;
};

#endif