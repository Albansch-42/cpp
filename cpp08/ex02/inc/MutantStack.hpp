#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template <class T>  
class MutantStack : public std::stack<T>
{ 
    private :
    public :
        MutantStack() {}
        ~MutantStack() {}
        MutantStack(const MutantStack &other) : std::stack<T>(other) {}
        MutantStack& operator=(const MutantStack &other) { 
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return *this;
        }

};


// std::ostream& operator<<(std::ostream& os, const MutantStack& other);

#endif 
