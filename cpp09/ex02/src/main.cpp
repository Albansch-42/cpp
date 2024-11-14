#include "PmergeMe.hpp"

void jean(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	(void)b;
	(void)e;
}	

int main(int ac, char **av)
{
	if (ac <= 1) {
		std::cerr << "Usage: " << av[0] << " [num1] [num2] [num3] ..." << std::endl;
		return 1;
	}

	PmergeMe pmm(ac, av);

	pmm.DisplayVector( "Before: ");
	clock_t start = clock();

	pmm.MegeInsert_vector(pmm.GetVector());

    double duration = (double)(clock() - start) / CLOCKS_PER_SEC * 1e6;
	pmm.DisplayVector("After: ");

	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << duration << " us" << std::endl;

	pmm.IsSorting();
	return 0;
}

// gettimeofday(, NULL);
// 	for (size_t i = 0; i < 22000; i++)
	
// 	gettimeofday(&end, NULL);
// 	long seconds = end.tv_sec - start.tv_sec;
// 	long microseconds = end.tv_usec - start.tv_usec;
// 	long duration = seconds * 1e6 + microseconds;
// 	std::cout << "Program duration: " << duration << " us" << std::endl;