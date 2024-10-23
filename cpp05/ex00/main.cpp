
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b;
    Bureaucrat Jean("Jean", 1);
    Bureaucrat A(Jean);
    
    std::cout << b << std::endl << Jean << std::endl << A << std::endl;
     
    try
    {
        Jean.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Jean.decrementDownGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << Jean << std::endl;
    
    return (0);
}