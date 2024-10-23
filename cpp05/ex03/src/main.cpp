
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Presidential pArdon", "Bender");
    if (rrf ) {
        std::cout << std::endl << *rrf << std::endl<< std::endl;
        delete rrf;
    }
    rrf = someRandomIntern.makeForm("Wrong Form", "Jean");
    if (rrf ) {
        std::cout << *rrf << std::endl<< std::endl;
        delete rrf;
    }
    return (0);
}