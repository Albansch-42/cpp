#include "FragTrap.hpp"

int main( void )
{
    FragTrap jean( "jean" );
    FragTrap guy( jean );

    jean.attack( "guy" );
    jean.takeDamage( 10 );
    jean.beRepaired( 10 );
    jean.highFivesGuys();

    return 0;
}