#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Cat		Gattino;
	Dog		Rex;

	std::cout << Gattino.getType() << " " << std::endl;
	std::cout << Rex.getType() << " " << std::endl;

	Rex.makeSound();
    Gattino.makeSound();
    // Animal jean;
	return 0;
}