#include "FragTrap.hpp"

FragTrap::FragTrap( std::string s ) : ClapTrap(s)
{

    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;

    std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap " << this->Name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if ( this->Energy_points <= 0 ) {
        std::cout << "FragTrap " << this->Name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->Name << " high fives everybody." << std::endl;
    this->Energy_points -= 1;
}