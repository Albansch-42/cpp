#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::string s = "o";
        std::cout << "test with char : " << s << std::endl;
        ScalarConverter::convert(s);

        std::cout << "---------------------------------------" << std::endl;

        s = "1238";
        std::cout << "test with int : " << s << std::endl;
        ScalarConverter::convert(s);

        std::cout << "---------------------------------------" << std::endl;

        s = "42.102f";
        std::cout << "test with float : " << s << std::endl;
        ScalarConverter::convert(s);

        std::cout << "---------------------------------------" << std::endl;

        s = "-inf";
        std::cout << "test with double : " << s << std::endl;
        ScalarConverter::convert(s);
    }
    else
        ScalarConverter::convert(argv[1]);
}
