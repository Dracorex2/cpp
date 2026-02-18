#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void) {
	Base *ret;
	int nb = std::rand() % 3;
	if (nb == 0)
		ret = new A;
	else if (nb == 1)
		ret = new B;
	else if (nb == 2)
		ret = new C;
	return ret;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main(void) {
	std::srand(std::time(NULL));

	int i = 10;
	while (i--) {
		Base *ptr = generate();
		Base &ref = *ptr;
		identify(ptr);
		identify(ref);
		delete ptr;
	}
	return 0;
}
