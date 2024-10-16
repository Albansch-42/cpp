
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// # include <iomanip>
# include <iostream>

class Bureaucrat
{
    private :
        const std::string _Name;
        int _Grade
    public :
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);


        class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
};

#endif