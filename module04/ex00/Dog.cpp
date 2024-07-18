#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    return (*this);
}

void    Dog::makeSound(void)
{
    std::cout << "ouaf ouaf" << std::endl;
}