#include "Span.hpp"

int main()
{
    Span sp = Span(10000);

    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    std::srand(std::time(0));
    int nb;
    for (int i = 0; i < 10; i++)
    {
        nb = std::rand() % 100;
        if (i % 3 == 1)
            nb = -nb;
        sp.addNumber(nb);
        std::cout << "[" << nb << "] ";
    }

    std::cout << std::endl << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}