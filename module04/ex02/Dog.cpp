#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    try 
    {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& err) 
    {
        std::cout << "Allocation failed : " << err.what() << std::endl;
    }
}

Dog::~Dog(void)
{
    delete  this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*copy.brain);
}

void    Dog::makeSound(void) const
{
    std::cout << "ouaf ouaf" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    if (this != &dog)
    {
        this->type = dog.type;
        this->brain = new Brain(*dog.brain);
    }
    return *this;
}