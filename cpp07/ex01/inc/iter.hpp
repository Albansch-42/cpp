#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>


template<typename T>
void iter(T* tab, std::size_t lenght, void (*function)(const T&))
{
    for (size_t i = 0; i < lenght; i++)
    {
        function(tab[i]);
    }

}

#endif 