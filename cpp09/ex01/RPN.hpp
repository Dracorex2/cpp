#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>

class RPN {
	private:
		RPN();
		std::string str;
		std::stack<int> stack;
	public:
		RPN(std::string str);
		RPN(const RPN &cpy);
		RPN &operator=(const RPN &other);
		~RPN();
		void eval(void);

};

#endif
