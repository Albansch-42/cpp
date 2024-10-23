#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string s ) : ClapTrap(s)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;

    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap " << this->Name << " called" << std::endl;
}

void    ScavTrap::attack(std::string const& target)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->Name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    this->Energy_points -= 1;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
}