#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
    std::string name;
    int     age;
};


class Serializer
{ 
    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private :
        Serializer();
        ~Serializer();
        Serializer(const Serializer &other);
        Serializer& operator=(const Serializer &other);
};

// std::ostream& operator<<(std::ostream& os, const Serializer& other);

#endif 
