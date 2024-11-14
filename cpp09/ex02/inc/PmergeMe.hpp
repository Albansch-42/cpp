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
		size_t NbElements;
		std::vector<int> vector;
		std::deque<int> deque;

	public :
		PmergeMe(int ac, char **av);
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
		void DisplayVector(std::string s);
		void DisplayDeque(std::string s);
		std::vector<int> &GetVector();
		std::deque<int> &GetDeque();

		void IsSorting();
		void MegeInsert(std::vector<int> &vector);
		void MegeInsert(std::deque<int> &deque);
};

// std::ostream& operator<<(std::ostream& os, const PmergeMe& other);

#endif