#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "brain constructore called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "brain destructor called" << std::endl;
}

Brain::Brain( const Brain& src )
{
    std::cout << "brain copy constructor called" << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "brain copy constructor called" << std::endl;
    if (this != &brain)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}