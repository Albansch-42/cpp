#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *tmp[100];

    for (int i = 0; i < 50; i++){
        tmp[i] = new Dog();}
    for (int i = 50; i < 100; i++){
        tmp[i] = new Cat(); }
    for (int i = 0; i < 100; i++){
        delete tmp[i]; }
}