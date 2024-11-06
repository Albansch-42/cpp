#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac <= 1) {
		std::cerr << "Usage: " << av[0] << " [num1] [num2] [num3] ..." << std::endl;
		return 1;
	}
	std::cout << ac << "   " << av[1] << std::endl;
	return 0;
}
