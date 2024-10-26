#include "iter.hpp"


template<typename T>
void increment(const T& var) {
	++(const_cast<T&>(var));
}


int main() {
	std::cout << "BEFORE\n" << std::endl;
	int arrInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (size_t i = 0; i < 10; i++) { std::cout << "["<< arrInt[i] << "] ";}
	
	std::cout << "\n\nAFTER\n" << std::endl;
	::iter(arrInt, 10, &increment);
	for (size_t i = 0; i < 10; i++) { std::cout << "["<< arrInt[i] << "] ";}

	return 0;
}