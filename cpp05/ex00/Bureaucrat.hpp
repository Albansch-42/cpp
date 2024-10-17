
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private :
        const std::string _Name;
        int _Grade;
    
    public :
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);

        std::string const getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementDownGrade();

        Bureaucrat& operator=(const Bureaucrat &bureau);

        ~Bureaucrat();

        class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw() ;
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
#endif