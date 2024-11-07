#include "PmergeMe.hpp"

PmergeMe::~PmergeMe()
{
	// std::cout << "Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
	// std::cout << "Recopy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return *this;
	// std::cout << "Assignment operator called" << std::endl;
}

bool isValidInt(const char *str)
{
	char *endptr;
	errno = 0;
	long val = strtol(str, &endptr, 10);

	if ((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN)) || (errno != 0 && val == 0))
		return false;

	if (endptr == str || val > INT_MAX || val < 0)
		return false;

	return true;
}

PmergeMe::PmergeMe(int ac, char **av)
{
	for (int i = 1; av[i] != NULL; i++)
	{
		if (!isValidInt(av[i]))
		{
			std::cerr << "Error: " << av[i] << " isn't a positif number" << std::endl;
			exit(1);
		}
		list.push_back(atoi(av[i]));
	}
	NbElements = ac - 1;

	// for (size_t i = 0; i < NbElements; i++)
	// {
	// 	for (size_t j = 0; j < NbElements; j++)
	// 	{
	// 		if (list[i] == list[j])
	// 		{
	// 			std::cerr << "Error: " << list[i] << " is duplicated" << std::endl;
	// 			exit(1);
	// 		}
	// 	}

	// }
}

void PmergeMe::displayList(std::string s)
{
	std::cout << s;

	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}

void sort(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	if (std::distance(b, e) <= 2)
	{

		if (*b > *(b + 1))
		{
			int tmp = *b;
			*b = *(b + 1);
			*(b + 1) = tmp;
		}
	}
	else
	{
		for (int i = 0; i < std::distance(b, e) / 2; i++)
		{
			sort(b + (i * 2), b + (i * 2) + 2);
		}
	}
}

void  PmergeMe::test(std::vector<int>::iterator a, std::vector<int>::iterator b, std::vector<int>::iterator c)
{
	if (c != list.end())
	{
		if (*c < *a)
		{
			std::rotate(a, b, c + 1);
		}
		else if (*c > *(b - 1))
		{
			std::rotate(b, c + 1, c + 1);
		}
		else
		{
			for (std::vector<int>::iterator it = a; it != b; ++it)
			{
				if (*c < *it)
				{
					std::rotate(it, b, c + 1);
					break;
				}
			}
		}
	}

	if ((c + 1) != list.end())
	{
		if (*(c + 1) < *a)
		{
			std::rotate(a, b, c + 2);
		}
		else if (*(c + 1) > *(b - 1))
		{
			std::rotate(b, c + 2, c + 2);
		}
		else
		{
			for (std::vector<int>::iterator it = a; it != b; ++it)
			{
				if (*(c + 1) < *it)
				{
					std::rotate(it, b, c + 2);
					break;
				}
			}
		}
	}
}
// {
// 	(void)a;
// 	(void)b;
// 	(void)c;
// 	(void)d;

// 	for (std::vector<int>::iterator c = a; c != b; c++)
// 	{
// 		std::cout << *c << " " ;
// 	}
// 	std::cout << std::endl;
// }

/*
if (*c < *a) {
		std::rotate(a, b, c + 1);
	} else if (*c > *(b - 1)) {
		std::rotate(b, c + 1, c + 1);
	} else {
		for (std::vector<int>::iterator it = a; it != b; ++it) {
			if (*c < *it) {
				std::rotate(it, b, c + 1);
				break;
			}
		}
	}

	if (*(c + 1) < *a) {
		std::rotate(a, b, c + 2);
	} else if (*(c + 1) > *(b - 1)) {
		std::rotate(b, c + 2, c + 2);
	} else {
		for (std::vector<int>::iterator it = a; it != b; ++it) {
			if (*(c + 1) < *it) {
				std::rotate(it, b, c + 2);
				break;
			}
		}
	}
*/

void PmergeMe::insert(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	for (int i = 0; i < std::distance(b, e) / 2; i++)
	{
		test(b, b + (i * 2) + 2, b + (i * 2) + 2);
	}
}

void PmergeMe::sorting()
{
	displayList("before: ");
	sort(list.begin(), list.end());

	insert(list.begin(), list.end());
	displayList("After: ");
}