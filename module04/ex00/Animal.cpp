#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = animal.type;
}

Animal& Animal::operator=(const Animal &animal)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = animal.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound(void)
{}