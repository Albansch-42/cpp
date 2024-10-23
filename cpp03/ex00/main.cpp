#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap clap("jean");

    clap.attack("guy");
    
    clap.takeDamage(5);
    clap.takeDamage(5);

    clap.beRepaired(10);
    return (0);
}