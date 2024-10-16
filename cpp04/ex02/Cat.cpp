#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    try 
    {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& err) 
    {
        std::cout << "Allocation failed : " << err.what() << std::endl;
    }
    
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat( const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*copy.brain);
}

void    Cat::makeSound(void) const
{
    std::cout << "miaou miaou" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    if (this != &cat)
    {
        this->type = cat.type;
        this->brain = new Brain(*cat.brain);
    }
    return *this;
}