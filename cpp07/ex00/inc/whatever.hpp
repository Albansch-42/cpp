#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

class whatever
{ 
    private :

    public :
        whatever();
        ~whatever();
        whatever(const whatever &other);
        whatever& operator=(const whatever &other);
};

// std::ostream& operator<<(std::ostream& os, const whatever& other);

#endif 
