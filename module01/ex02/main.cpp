# include <iostream>

int main( void ) {
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;

    std::cout << "The memory address of the string variable : " << &s << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    
}