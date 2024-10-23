#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string s)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->Name = s;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    this->Attack_damage = clap.Attack_damage;
    this->Energy_points = clap.Energy_points;
    this->Name = clap.Name;
    this->Hit_points = clap.Hit_points;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &clap)
{
    std::cout << "Copy assignment ClapTrap operator called" << std::endl;
    this->Attack_damage = clap.Attack_damage;
    this->Energy_points = clap.Energy_points;
    this->Name = clap.Name;
    this->Hit_points = clap.Hit_points;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap " << this->Name << " called" << std::endl;
}

void    ClapTrap::attack(std::string const& target)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    this->Energy_points -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points <= amount)
    {
        if (this->Hit_points > 0) {
            std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage! Now he is dead!" << std::endl;
            this->Hit_points = 0;
        }
        else 
            std::cout << "ClapTrap " << this->Name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
    this->Hit_points -= amount;
    this->Energy_points -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points <= 0)
    {
        std::cout << this->Name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->Name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->Hit_points += amount;
    this->Energy_points += 1;
}
