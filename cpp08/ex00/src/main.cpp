#include "easyfind.hpp"


int main(){

    std::vector<int> jean;
    jean.push_back(1);
    jean.push_back(2);
    jean.push_back(3);
    jean.push_back(4);
    jean.push_back(5);

    // Affichage pour vérifier
    for (size_t i = 0; i < jean.size(); ++i) {
        std::cout << "[" << jean[i] << "] ";
    }
    std::cout << std::endl;

	std::cout << std::endl << "start looking for 1" << std::endl;
	try {
		int n = easyfind(jean, 1);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}


	std::cout << std::endl << "start looking for 33" << std::endl;
	try {
		int n = easyfind(jean, 33);
		std::cout << "Value found : " << n  << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

    return 0;
}