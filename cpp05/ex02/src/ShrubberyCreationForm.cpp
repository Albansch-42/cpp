#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _Target("Default_target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _Target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    this->AForm::operator=(other);
    this->_Target = other._Target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    ToExecute(executor);
    std::string str = _Target + "_shrubbery";
    std::ofstream   outputFile(str.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error create output file." << std::endl;
        return ;
    }
    outputFile << "   ooxoxoo    ooxoo" << std::endl
            << "  ooxoxo oo  oxoxooo" << std::endl
            << " oooo xxoxoo ooo ooox" << std::endl
            << " oxo o oxoxo  xoxxoxo" << std::endl
            << "  oxo xo/xooo/o/ ooo" << std::endl
            << "    ooo/oo/ /o/oo" << std::endl
            << "       |  _/_/" << std::endl
            << "       |  |_/  " << std::endl
            << "       |  |/   " << std::endl
            << "       |  |   " << std::endl
            << "       |  |   " << std::endl
            << "_______|__|_______" << std::endl;
    outputFile.close();
}