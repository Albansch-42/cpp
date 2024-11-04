#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

class ValueNotFound : public std::exception {
	public:
	    virtual const char *what() const throw() {
            return ("Value not found");
        }
};

template<typename T>
int	easyfind(T const & array, int n) {
    typename T::const_iterator it = array.begin();
    typename T::const_iterator ite = array.end();
    if (std::find(it, ite, n) == ite)
        throw ValueNotFound();
    return n;
}

#endif 
