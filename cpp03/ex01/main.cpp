#include "ScavTrap.hpp"

int main( void ) {
    ScavTrap Scav("jean");

    Scav.attack("guy");
    
    Scav.takeDamage(99);
    Scav.takeDamage(5);

    Scav.beRepaired(10);

    Scav.guardGate();

    return (0);
}