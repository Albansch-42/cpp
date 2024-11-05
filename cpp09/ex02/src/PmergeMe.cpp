#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "Default constructor called" << std::endl;
}

PmergeMe::~PmergeMe()
{
    // std::cout << "Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    // std::cout << "Recopy constructor called" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
    // std::cout << "Assignment operator called" << std::endl;
}
