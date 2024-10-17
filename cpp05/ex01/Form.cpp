#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _Name("Default Form"), _Signed(false), _GradeToSign(150), _GradeToExecute(150) {}
Form::~Form() {}

Form::Form(std::string name, int gradetosign, int gradetoexecute) : _Name(name), _Signed(false), _GradeToSign(gradetosign), _GradeToExecute(gradetoexecute) 
{
    if (gradetosign < 1 || gradetoexecute < 1)
        throw Form::GradeTooHighException();
    if (gradetosign > 150 || gradetoexecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &f) : _Name(f._Name), _Signed(false), _GradeToSign(f._GradeToSign), _GradeToExecute(f._GradeToExecute)
{ }

Form& Form::operator=(const Form &f)
{
    if (this != &f)
        _Signed = f._Signed;
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "The grade is too high !";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "The grade is too low !";
}

std::string const   Form::getName() const { return _Name; }
bool                Form::getSigned() const { return _Signed; }
int                 Form::getGradeSign() const { return _GradeToSign; }
int                 Form::getGradeExecute() const { return _GradeToExecute; }

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _GradeToSign)
		throw (Form::GradeTooLowException());
    _Signed = true;
}

std::ostream & operator << (std::ostream &os, const Form &f) 
{
    os << "Form name: " << f.getName() << std::endl;
	if (f.getSigned())
		os << "The Form is signed";
	else
		os << "The Form isn't signed";
	os << std::endl << "The grade required to execute: " << f.getGradeExecute() << std::endl << "The grade required to sign: " << f.getGradeSign();
    return os;
}

