#include <iostream>
#include <string>
#include <list>
#include "MutantStack.hpp"

void do_subject() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void do_list() {
	std::list<int> stack;
	stack.push_back(5);
	stack.push_back(17);
	std::cout << stack.back() << std::endl;
	stack.pop_back();
	std::cout << stack.size() << std::endl;
	stack.push_back(3);
	stack.push_back(5);
	stack.push_back(737);
	//[...]
	stack.push_back(0);
	std::list<int>::iterator it = stack.begin();
	std::list<int>::iterator ite = stack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void do_strings() {
	MutantStack<std::string> s;
	s.push("AAAA");
	s.push("BBBB");
	s.push("CCCC");
	s.push("DDDD");
	std::cout << "top " << s.top() << std::endl;
	s.pop();
	s.push("ZZZZZZZ");
	std::cout << "top " << s.top() << std::endl;
	MutantStack<std::string>::iterator start = s.begin();
	MutantStack<std::string>::iterator end = s.end();
	while (start != end) {
		std::cout << "\'" << *start << "\' ";
		start++;
	}
	std::cout << std::endl;
}

int main() {
	do_subject();
	std::cout << std::endl;
	do_list();
	std::cout << std::endl;
	do_strings();
	return 0;
}
