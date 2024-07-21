#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private : 
        Brain *brain;
    public :
        Cat(void);
        Cat(const Cat &copy);

        virtual ~Cat(void);
        virtual void makeSound() const;

        Cat& operator=(const Cat& cat);
};

#endif