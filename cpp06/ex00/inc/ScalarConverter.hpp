#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
// #include <string>
// #include <climits>
// #include <limits.h>
// #include <float.h>

class ScalarConverter
{ 
    private :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter &other);
        ~ScalarConverter();
    
    public :
        static void convert(std::string s);
};

// std::ostream& operator<<(std::ostream& os, const ScalarConverter& other);

#endif 
