
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private : 
        std::string Name;
        unsigned int Hit_points ;
        int Energy_points ;
        int Attack_damage;

    public :
        ClapTrap(std::string s);
        ClapTrap(const ClapTrap &clap);
        ClapTrap& operator=( const ClapTrap &clap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif