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
		vector.push_back(atoi(av[i]));
		deque.push_back(atoi(av[i]));
	}
	NbElements = ac - 1;
}

void PmergeMe::DisplayVector(std::string s)
{
	std::cout << s;
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::IsSorting()
{
	for (size_t i = 0; i < NbElements - 1; i++)
	{
		if (vector[i] > vector[i + 1]){
			std::cout << "NON TRIER" << std::endl;
			std::cout << vector[i] << " " << vector[i + 1] << std::endl;
			return ;
		}
	}
	std::cout << "TRIER" << std::endl;
}

std::vector<int> &PmergeMe::GetVector()
{
	return vector;
}

void finish_vec(std::vector<int>::iterator it, std::vector<int>::iterator end, std::vector<int> &vec) {
	while (it != end){
		vec.push_back(*it);
		it++;
	}
}

void merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vec)
{
	
	std::vector<int>::iterator it_left = left.begin();
	std::vector<int>::iterator end_left = left.end();

	std::vector<int>::iterator it_right = right.begin();
	std::vector<int>::iterator end_right = right.end();

	vec.clear();

	while (it_left != end_left && it_right != end_right)
	{
		if (*it_left < *it_right)
		{
			vec.push_back(*it_left);
			it_left++;
		}
		else
		{
			vec.push_back(*it_right);
			it_right++;
		}
	}
	finish_vec(it_left, end_left, vec);
	finish_vec(it_right, end_right, vec);
}

void PmergeMe::MegeInsert_vector(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;

    size_t middle = vec.size() / 2;

    std::vector<int> left;
    std::vector<int> right;

    left.assign(vec.begin(), vec.begin() + middle);
    right.assign(vec.begin() + middle, vec.end());
	PmergeMe::MegeInsert_vector(left);
	PmergeMe::MegeInsert_vector(right);
	merge(left, right, vec);
}


// std::cout << "left: ";
	// for (std::vector<int>::iterator it = left.begin(); it != left.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;

	// std::cout << "right: ";
	// for (std::vector<int>::iterator it = right.begin(); it != right.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;

	// std::cout << "vec: ";
	// for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	// 	std::cout << *it << " ";
	// std::cout << std::endl << std::endl;

	// size_t index_left = 0;
	// size_t index_right = 0;
	// size_t index = 0;

	// while (index_left < left.size() && index_right < right.size())
	// {
	// 	if (left[index_left] < right[index_right])
	// 	{
	// 		vec[index] = left[index_left];
	// 		index++;
	// 		index_left++;
	// 	}
	// 	index_left++;
	// }
	// while (index_right < right.size())
	// {
	// 	vec[index] = right[index_right];
	// 	index++;
	// 	index_right++;
	// }
	// while (index_left < left.size())
	// {
	// 	vec[index] = left[index_left];
	// 	index++;
	// 	index_left++;
	// }
	// while (index_right < right.size())
	// {
	// 	vec[index] = right[index_right];
	// 	index++;
	// 	index_right++;
	// }