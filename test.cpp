#include <iostream>

std::string _getInput(std::string str)
{
    std::string input = "";
    while (1)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (!input.empty())
            break ;
        else
        {
            std::cout << "Invalid input; please try again." << std::endl;
        }
    }
    return (input);
}

int main()
{
    std::string s = _getInput("ecrire ton nom: ");
    
    std::cout << s << std::endl;
    return 0;
}