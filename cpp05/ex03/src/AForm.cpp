#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : _Name("Default AForm"), _Signed(false), _GradeToSign(150), _GradeToExecute(150) {}
AForm::~AForm() {}

AForm::AForm(std::string name, int gradetosign, int gradetoexecute) : _Name(name), _Signed(false), _GradeToSign(gradetosign), _GradeToExecute(gradetoexecute) 
{
    if (gradetosign < 1 || gradetoexecute < 1)
        throw AForm::GradeTooHighException();
    if (gradetosign > 150 || gradetoexecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &f) : _Name(f._Name), _Signed(false), _GradeToSign(f._GradeToSign), _GradeToExecute(f._GradeToExecute)
{ }

AForm& AForm::operator=(const AForm &f)
{
    if (this != &f)
        _Signed = f._Signed;
    return *this;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "The grade is too high !";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "The grade is too low !";
}

std::string const   AForm::getName() const { return _Name; }
bool                AForm::getSigned() const { return _Signed; }
int                 AForm::getGradeSign() const { return _GradeToSign; }
int                 AForm::getGradeExecute() const { return _GradeToExecute; }

void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _GradeToSign)
		throw (AForm::GradeTooLowException());
    _Signed = true;
}

std::ostream & operator << (std::ostream &os, const AForm &f) 
{
    os << "Form name: " << f.getName() << std::endl;
	if (f.getSigned())
		os << "The Form is signed";
	else
		os << "The Form isn't signed";
	os << std::endl << "The grade required to execute: " << f.getGradeExecute() << std::endl << "The grade required to sign: " << f.getGradeSign();
    return os;
}

void AForm::ToExecute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->_GradeToExecute)
        throw AForm::GradeTooLowException();
    if (!this->_Signed)
        throw AForm::FormNoSigned();
}

const char* AForm::FormNoSigned::what() const throw() {
    return "The Form isn not signed !";
}