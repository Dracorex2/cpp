#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

void test_empty() {
	Span empty_span = Span(0);

	std::cout << "trying to add number to Span(0)" << std::endl;
	for (int i = 0; i < 5; i++) {
		try {
			empty_span.addNumber(i);
			std::cout << "SUCESS ??????" << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "fail " << e.what() << std::endl;
		}
	}
	try {
		std::cout << "searching short span " << std::endl;
		empty_span.shortestSpan();
	}
	catch (const std::exception &e) {
			std::cout << "fail " << e.what() << std::endl;
	}

	try {
		std::cout << "searching long span " << std::endl;
		empty_span.longestSpan();
	}
	catch (const std::exception &e) {
			std::cout << "fail " << e.what() << std::endl;
	}
}

void test_big() {
	Span span = Span(15000);
	std::vector<int> vec =  std::vector<int>(15000, 0);
	std::cout << "vec: ";
	for (int i = 0; i < 15000; i++) {
		vec[i] = (int)rand();
		if (i)
			std::cout << ", ";
		std::cout << vec[i];
	}
	std::cout << std::endl;
	span.addRange(vec.begin(), vec.end());
	std::cout << "shortest " << span.shortestSpan() << std::endl;
	std::cout << "longest " << span.longestSpan() << std::endl;
}

int main() {
	srand(time(NULL));

	test_empty();
	test_big();
	return 0;
}
