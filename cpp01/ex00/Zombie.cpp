
#include "Zombie.hpp"


Zombie::Zombie( std::string name) 
{
    this->Name = name;
}
void    Zombie::announce(void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() 
{
    std::cout << "Zombie " << this->Name << " has been destroyed." << std::endl;
}

