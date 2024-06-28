
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>

class Zombie
{
    private :
        std::string Name;
    
    public :
        Zombie(std::string name);
        ~Zombie();
        Zombie* newZombie( std::string name );
        void    announce();
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif