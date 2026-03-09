#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "need 1 argument" << std::endl;
		return (1);
	}
	RPN calc(argv[1]);
	calc.eval();
	return 0;
}
