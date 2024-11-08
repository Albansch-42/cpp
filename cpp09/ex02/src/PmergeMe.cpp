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

std::vector<int>  PmergeMe::test(std::vector<int>::iterator a, std::vector<int>::iterator e, std::vector<int>::iterator b2, std::vector<int>::iterator e2)
{
	std::vector<int> res;
    bool insert = false;

    while (a != e)
    {
        if (*a > *b2 && !insert)
        {
            res.push_back(*b2);
            if (std::distance(b2, e2) == 2)
                b2++;
            else
                insert = true;
        }
        else
        {
            res.push_back(*a);
            a++;
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

void PmergeMe::insert(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	for (int i = 0; i < std::distance(b, e) / 2 - 1; i++)
	{
		// displayList("");
		if ((i * 2) + 4 > std::distance(b, e))
		{
			// std::cout << "test 1" << std::endl;
			list = test(b, b + (i * 2) + 2, b + (i * 2) + 2, b + (i * 2) + 3);
		}
		else
		{
			// std::cout << "test 2" << std::endl;
			list = test(b, b + (i * 2) + 2, b + (i * 2) + 2, b + (i * 2) + 4);
		}
	}
}

void PmergeMe::sorting()
{
	sort(list.begin(), list.end());

	insert(list.begin(), list.end());
	
}

void PmergeMe::IsSorting()
{
	for (size_t i = 0; i < NbElements; i++)
	{
		if (list[i] > list[i + 1]){
			std::cout << "NON TRIER" << std::endl;
			return ;
		}
	}
	std::cout << "TRIER" << std::endl;
}


void PmergeMe::CopyDeque()
{

	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}