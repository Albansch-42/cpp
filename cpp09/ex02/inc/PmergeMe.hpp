#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <ctime>
# include <unistd.h>
# include <vector>
# include <cstdlib> // for atoi()
# include <climits> // for INT_MAX and INT_MIN
# include <cctype>
# include <cerrno>
# include <sys/time.h>
# include <algorithm> 
# include <deque>

class PmergeMe
{
	private :
		struct timeval _start;
		struct timeval _end;
		size_t NbElements;
		std::vector<int> list;
		std::deque<int> deque;

	public :
		PmergeMe(int ac, char **av);
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
		void displayList(std::string s);
		void sorting();

		std::vector<int>  test(std::vector<int>::iterator a, std::vector<int>::iterator e, std::vector<int>::iterator b2, std::vector<int>::iterator e2);
		void insert(std::vector<int>::iterator b, std::vector<int>::iterator e);
		void IsSorting();
		void CopyDeque();
};

// std::ostream& operator<<(std::ostream& os, const PmergeMe& other);

#endif
