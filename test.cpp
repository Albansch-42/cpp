#include <iostream>
#include <string>
#include <cctype>
#include <queue>
#include <vector>
#include <algorithm>

template<typename T>
void little_sort(typename T::iterator b, typename T::iterator e) 
{
    if (std::distance(b, e) <= 1) 
    {
        return;
    }
    else if (std::distance(b, e) == 2) 
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
            little_sort<T>(b + (i * 2), std::min(b + (i * 2) + 2, e));
        }
    }
}

int main(int ac, char **av)
{
    if (ac <= 0) {
        std::cerr << "Usage: " << av[0] << " [num1] [num2] [num3] ..." << std::endl;
        return 1;
    }

    std::vector<int> s;

    s.push_back(3);
    s.push_back(2);
    s.push_back(5);
    s.push_back(10);

    std::vector<int> s2;
    
    s2.push_back(0);
    s2.push_back(2);

    for (std::vector<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Explicitly specify the template argument T as std::vector<int>
    little_sort<std::vector<int>>(s.begin(), s.end());

    for (std::vector<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
