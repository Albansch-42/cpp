#include "../inc/PmergeMe.hpp"

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
		// if (*b > *(b + 1))
		// {
		// 	int tmp = *b;
		// 	*b = *(b + 1);
		// 	*(b + 1) = tmp;
		// }
    } 
    else 
    {
        for (int i = 0; i < std::distance(b, e) / 2; ++i) 
        {
            little_sort<T>(b + (i * 2), b + (i * 2) + 2);
        }
    }
}

template<typename T>
T  PmergeMe::test(typename T::iterator b1, typename T::iterator e1, typename T::iterator b2, typename T::iterator e2)
{
	std::vector<int> res;
    bool insert = false;

    while (b1 != e1)
    {
        if (*b1 > *b2 && !insert)
        {
            res.push_back(*b2);
            if (std::distance(b2, e2) == 2)
                b2++;
            else
                insert = true;
        }
        else
        {
            res.push_back(*b1);
            b1++;
        }
    }
    if (!insert)
    {
        res.push_back(*b2);
        if (std::distance(b2, e2) == 2)
            res.push_back(*(b2 + 1));
    }
    return res;
}

template<typename T>
void PmergeMe::insert(typename T::iterator b, typename T::iterator e)
{
	for (int i = 0; i < std::distance(b, e) / 2 - 1; i++)
	{
		// displayList("");
		if ((i * 2) + 4 > std::distance(b, e))
		{
			// std::cout << "test 1" << std::endl;
			list = test<T>(b, b + (i * 2) + 2, b + (i * 2) + 2, b + (i * 2) + 3);
		}
		else
		{
			// std::cout << "test 2" << std::endl;
			list = test<T>(b, b + (i * 2) + 2, b + (i * 2) + 2, b + (i * 2) + 4);
		}
	}
}

void PmergeMe::sorting()
{
	little_sort<std::vector<int>>(list.begin(), list.end());
    
	insert<std::vector<int>>(list.begin(), list.end());
	
}