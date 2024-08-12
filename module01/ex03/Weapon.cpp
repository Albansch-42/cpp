#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
    std::cout<< "<Weapons> " << this->type << " : destroy" << std::endl;
}

const std::string&	Weapon::getType()
{
    const std::string& a = this->type;
    return (a);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}