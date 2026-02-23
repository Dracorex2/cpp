#include "iter.hpp"
#include <iostream>

static void printer(const int &x) {
	std::cout << x << std::endl;
}

static void inc(int &x) {
	 x++;
}

int main() {
	const int arr[] = {
		12, 23, 45, 67
	};
	std::cout << "print const" << std::endl;
	iter(arr, sizeof(arr) / sizeof(arr[0]), printer);

	int arr2[] = {
		41, 52, 0, -1
	};

	std::cout << "before increment" << std::endl;
	iter(arr2, sizeof(arr2) / sizeof(arr2[0]), printer);
	std::cout << "incrementing" << std::endl;
	iter(arr2, sizeof(arr2) / sizeof(arr2[0]), inc);
	iter(arr2, sizeof(arr2) / sizeof(arr2[0]), printer);
}
