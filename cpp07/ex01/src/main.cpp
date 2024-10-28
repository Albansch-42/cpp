#include "iter.hpp"


template<typename T>
void increment(const T& var) {
	++(const_cast<T&>(var));
}


int main() {
	std::cout << "BEFORE\n" << std::endl;

	int arrInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char arrstring[5] = {'a', 'b', 'c', 'd', 'e'};\

	for (size_t i = 0; i < 10; i++) { std::cout << "["<< arrInt[i] << "] ";}
	std::cout << std::endl;
	for (size_t i = 0; i < 5; i++) { std::cout << "["<< arrstring[i] << "] ";}
	
	::iter<int>(arrInt, 10, &increment);
	::iter<char>(arrstring, 5, &increment);

	std::cout << "\n\nAFTER\n" << std::endl;
	
	for (size_t i = 0; i < 10; i++) { std::cout << "["<< arrInt[i] << "] ";}
	std::cout << std::endl;
	for (size_t i = 0; i < 5; i++) { std::cout << "["<< arrstring[i] << "] ";}

	return 0;
}