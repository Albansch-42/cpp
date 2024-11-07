#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac <= 1) {
		std::cerr << "Usage: " << av[0] << " [num1] [num2] [num3] ..." << std::endl;
		return 1;
	}

	PmergeMe pmm(ac, av);


	pmm.sorting();

	
	
	(void)pmm;
	return 0;
}

// gettimeofday(, NULL);
// 	for (size_t i = 0; i < 22000; i++)
	
// 	gettimeofday(&end, NULL);
// 	long seconds = end.tv_sec - start.tv_sec;
// 	long microseconds = end.tv_usec - start.tv_usec;
// 	long duration = seconds * 1e6 + microseconds;
// 	std::cout << "Program duration: " << duration << " us" << std::endl;