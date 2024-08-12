
#include "Zombie.hpp"

int main( void ) {
    std::string name;

    Zombie zombi1("jean");
    
    Zombie *zombi2 = newZombie("Luc");
    zombi2->announce();
    delete zombi2;

    randomChump("randi");
    return 0;
}