#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
	private:
		unsigned int nb;
		T *val;
	public:
		Array();
		Array(unsigned int n);
		Array(Array &cpy);
		Array &operator=(const Array &other);
		~Array();
		T &operator[](unsigned int i);
		const T &operator[](unsigned int i) const;
		unsigned int size() const;

};

template <typename T>
Array<T>::Array() {
	this->nb = 0;
	this->val = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	this->nb = n;
	this->val = new T[n];
}

template <typename T>
Array<T>::Array(Array &cpy) {
	*this = cpy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (&other == this)
		return *this;
	delete[] (this->val);
	this->val = new T[other.nb];
	for (unsigned int i = 0; i < other.nb; i++) {
		this->val[i] = other.val[i];
	}
	this->nb = other.nb;
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] (this->val);
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
	if (i >= this->nb)
		throw std::out_of_range("index out of range");
	return this->val[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const {
	if (i >= this->nb)
		throw std::out_of_range("index out of range");
	return this->val[i];
}

template <typename T>
unsigned int Array<T>::size() const {
	return this->nb;
}

#endif
