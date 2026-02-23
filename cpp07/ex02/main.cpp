#include "Array.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

int main() {
	const Array<std::string> const_arr(10);

	std::cout << "checking content of const arr"  << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << i << ": " << const_arr[i] << std::endl;
	std::cout << "trying to access 10th element" << std::endl;
	try {
		const_arr[10];
		std::cout << "success ?" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Array<std::string> arr1(10);
	std::cout << "checking content of arr1"  << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << i << ": " << arr1[i] << std::endl;
	std::cout << "trying to acces element -2th" << std::endl;
	try {
		arr1[-2];
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "setting some elements of arr1" << std::endl;
	arr1[0] = "LELEMENT1";
	arr1[7] = "AAAAAAAA";
	arr1[9] = "THE 9";
	std::cout << "display arr1" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "\"" << arr1[i] << "\"";
		if (i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	std::cout << "initing arr2 with op= from arr1" << std::endl;
	Array<std::string> arr2(1);
	std::cout << "arr2 len " << arr2.size() << std::endl;
	std::cout << "arr2[0]: " << arr2[0] << std::endl;
	arr2 = arr1;
	std::cout << "arr2 len " << arr2.size() << std::endl;
	std::cout << "arr2[0]: " << arr2[0] << std::endl;

	std::cout << "display arr2" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "\"" << arr2[i] << "\"";
		if (i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

}
