
#include "Zombie.hpp"


Zombie::Zombie() 
{}

void    Zombie::announce(void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() 
{
    std::cout << "Zombie " << this->Name << " has been destroyed." << std::endl;
}

void    Zombie::setName(std::string name) 
{
    this->Name = name;
}
