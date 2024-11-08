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
		deque.push_back(atoi(av[i]));
	}
	NbElements = ac - 1;
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


template<typename T>
void little_sort(typename T::iterator b, typename T::iterator e) 
{
    if (std::distance(b, e) <= 2) 
    {
        if (*b > *(b + 1)) 
        {
            std::iter_swap(b, b + 1);
        }
    } 
    else 
    {
        for (int i = 0; i < std::distance(b, e) / 2; ++i) 
        {
            little_sort(b + (i * 2), b + (i * 2) + 2);
        }
    }
}

void PmergeMe::sorting()
{
	little_sort<std::vector<int>>(list.begin(), list.end());
    
	insert(list.begin(), list.end());
	
}