#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << "expected at least 1 arg" << std::endl;
		return 1;
	}
	PmergeMe merge(argv + 1, argc - 1);
	merge.sort();

	return 0;
}
