
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>

class Zombie
{
    private :
        std::string Name;
    
    public :
        Zombie();
        ~Zombie();
        Zombie* newZombie( std::string name );
        void    announce();
        void    setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif