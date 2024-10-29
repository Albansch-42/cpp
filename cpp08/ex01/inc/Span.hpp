#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <ctime> 

class Span
{ 
    private :
        unsigned int _N;
        unsigned int _index;
        std::vector<int> _tab;
    public :
        Span(unsigned int N);
        ~Span();
        Span(const Span &other);
        Span& operator=(const Span &other);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};

// std::ostream& operator<<(std::ostream& os, const Span& other);

#endif 
