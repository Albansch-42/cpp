#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
    private :
        ScavTrap();
    public :
        ScavTrap( std::string s );
        ~ScavTrap();

        void    attack(std::string const& target);
        void    guardGate();
};

#endif