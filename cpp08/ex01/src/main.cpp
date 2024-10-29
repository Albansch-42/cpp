#include "Span.hpp"

int main()
{
    Span sp = Span(10000);
    std::srand(std::time(0));
    int nb;
    for (size_t i = 0; i < 10000; i++)
    {
        nb = std::rand() % 10000000001;
        sp.addNumber(nb);
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}