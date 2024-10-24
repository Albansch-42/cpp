#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base *generate() 
{
	std::srand(std::time(NULL));
	int random_number = (std::rand() % 3);
	if (random_number == 0){
		std::cout << "created A" << std::endl;
		A *a = new A();
		return a;
	}
	else if (random_number == 1){
		std::cout << "created B" << std::endl;
		B *b = new B();
		return b;
	}
	else if (random_number == 2){
		std::cout << "created C" << std::endl;
		C *c = new C();
		return c;
	}
	return NULL;
}

void identify(Base* p)
{
    Base *R = dynamic_cast<A*>(p);
    if (R){
        std::cout << "its A" << std::endl;
		return ;
	}

    R = dynamic_cast<B*>(p);
    if (R){
        std::cout << "its B" << std::endl;
		return ;
	}

    R = dynamic_cast<C*>(p);
    if (R){
        std::cout << "its C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&> (p);
		std::cout << "its an A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e) {}

	try {
		B &a = dynamic_cast<B&> (p);
		std::cout << "its an B" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e) {}

	try {
		C &a = dynamic_cast<C&> (p);
		std::cout << "its an C" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e) {}
}

int main(void)
{
    Base *p = generate();

    identify(p);
	identify(*p);
	return 0;
}