
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
    private :
        const std::string   _Name;
        bool                _Signed;
        int const           _GradeToSign;
        int const           _GradeToExecute;
    
    public :
        Form(void);
        Form(std::string name, int gradetosign, int gradetoexecute);
        Form(const Form &other);
        Form& operator=(const Form &f);
        ~Form();
        
        
        std::string const   getName() const;
        bool                getSigned() const;
        int                 getGradeSign() const;
        int                 getGradeExecute() const;
        
        void beSigned(const Bureaucrat &b);

        class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw() ;
		};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif