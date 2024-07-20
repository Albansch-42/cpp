#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "j type: " << j->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;
    i->makeSound();
    meta->makeSound();

    
    delete  meta;
    delete  j;
    delete  i;
}