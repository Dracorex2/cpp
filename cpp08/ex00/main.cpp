#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main(void) {
	std::vector<int> vec;
	vec.push_back(2);
	std::list<int> lst;
	try {
		std::cout << easyfind(vec, 2) << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << easyfind(lst, 2) << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
