
#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
    private :
        const std::string   _Name;
        bool                _Signed;
        int const           _GradeToSign;
        int const           _GradeToExecute;
    
    public :
        AForm(void);
        AForm(std::string name, int gradetosign, int gradetoexecute);
        AForm(const AForm &other);
        AForm& operator=(const AForm &f);
        virtual ~AForm();
        
        std::string const   getName() const;
        bool                getSigned() const;
        int                 getGradeSign() const;
        int                 getGradeExecute() const;
        
        void beSigned(const Bureaucrat &b);

        virtual void execute(Bureaucrat const & executor) const = 0;
        void ToExecute(Bureaucrat const & executor) const;

        class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw() ;
		};
        class FormNoSigned : public std::exception {
			public:
				virtual const char *	what() const throw() ;
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif