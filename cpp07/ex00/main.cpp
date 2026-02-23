#include <iostream>
#include "whatever.hpp"

static void intTest(int nb1, int nb2) {
	std::cout << "int type test" << std::endl;
	std::cout << "nb1 val: " << nb1 << std::endl;
	std::cout << "nb2 val: " << nb2 << std::endl;
	std::cout << "min(nb1, nb2) = " <<min(nb1, nb2) << std::endl;
	std::cout << "max(nb1, nb2) = "  << max(nb1, nb2) << std::endl;
	std::cout << "swap nb1 and nb2" << std::endl;
	swap(nb1, nb2);
	std::cout << "nb1 val: " << nb1 << std::endl;
	std::cout << "nb2 val: " << nb2 << std::endl;
}

static void charTest(char c1, char c2) {
	std::cout << "char type test" << std::endl;
	std::cout << "c1 val: " << c1 << std::endl;
	std::cout << "c2 val: " << c2 << std::endl;
	std::cout << "min(c1, c2) = " <<min(c1, c2) << std::endl;
	std::cout << "max(c1, c2) = "  << max(c1, c2) << std::endl;
	std::cout << "swap c1 and c2" << std::endl;
	swap(c1, c2);
	std::cout << "c1 val: " << c1 << std::endl;
	std::cout << "c2 val: " << c2 << std::endl;
}

static void constCharTest(const char c1, const char c2) {
	std::cout << "const char type test" << std::endl;
	std::cout << "c1 val: " << c1 << std::endl;
	std::cout << "c2 val: " << c2 << std::endl;
	std::cout << "min(c1, c2) = " <<min(c1, c2) << std::endl;
	std::cout << "max(c1, c2) = "  << max(c1, c2) << std::endl;
	std::cout << "can't swap beacause \'const\'" << std::endl;
}

int main(void) {
	intTest(1, 5);
	std::cout << "--------------------" << std::endl;
	charTest('f', 'x');
	std::cout << "--------------------" << std::endl;
	constCharTest('a', 'y');
	return 0;
}

//int main( void ) {
//	int a = 2;
//	int b = 3;
//	::swap( a, b );
//	std::cout << "a = " << a << ", b = " << b << std::endl;
//	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//	std::string c = "chaine1";
//	std::string d = "chaine2";
//	::swap(c, d);
//	std::cout << "c = " << c << ", d = " << d << std::endl;
//	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//	return 0;
//}
