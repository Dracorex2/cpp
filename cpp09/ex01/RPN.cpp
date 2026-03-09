#include "RPN.hpp"
#include <cstddef>
#include <iostream>

RPN::RPN(std::string str) {
	this->str = str;
}

RPN::RPN(const RPN &cpy) {
	*this = cpy;
}

RPN &RPN::operator=(const RPN &other) {
	if (this == &other) {
		return (*this);
	}
	this->str = other.str;
	this->stack = other.stack;
	return (*this);
}

RPN::~RPN() {
}

void RPN::eval(void) {
	size_t len = str.length();
	for (size_t i = 0; i < len; i++) {
		if (this->str[i] == ' ')
			continue;

		if (this->str[i] >= '0' && this->str[i] <= '9')
			this->stack.push((int)(str[i] - '0'));
		else {
			if (this->stack.size() < 2) {
				std::cout << "Error, need 2 number" << std::endl;
				return;
			}
			int nb2 = this->stack.top();
			this->stack.pop();
			int nb1 = this->stack.top();
			this->stack.pop();
			if (this->str[i] == '+')
				this->stack.push(nb1 + nb2);
			else if (this->str[i] == '-')
				this->stack.push(nb1 - nb2);
			else if (this->str[i] == '*')
				this->stack.push(nb1 * nb2);
			else if (this->str[i] == '/') {
				if (nb2 == 0) {
					std::cerr << "Error, can't devide by 0" << std::endl;
					return;
				}
				this->stack.push(nb1 / nb2);
			}
			else {
				std::cerr << "Error, invalid input " << this->str[i] << std::endl;
				return;
			}
		}
	}
	if (this->stack.size() < 1) {
		std::cerr << "Error, not enouth numbers" << std::endl;
		return;
	}
	if (this->stack.size() > 1) {
		std::cerr << "Error, too many numbers" << std::endl;
		return;
	}
	std::cout << this->stack.top() << std::endl;
}
