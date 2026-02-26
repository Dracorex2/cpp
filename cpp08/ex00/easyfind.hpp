#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(const T &arr, int to_find) {
	const typename T::const_iterator ret = std::find(arr.begin(), arr.end(), to_find);
	if (ret == arr.end())
		throw std::runtime_error("not found");
	return *ret;
}

#endif
