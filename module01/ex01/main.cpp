
#include "Zombie.hpp"

int main( void ) {
    int N = 5;
    Zombie *zombiz = zombieHorde(N, "zombi");

    for (int i = 0; i < N; i++) {
        zombiz[i].announce();
    }

    delete [] zombiz;
    return 0;
}