#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>

template<typename Tp>
class MutantStack : public std::stack<Tp> {
	public:
		typedef typename std::stack<Tp>::container_type::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack<Tp> &cpy);
		MutantStack<Tp> &operator=(const MutantStack<Tp> &other);
		~MutantStack();
		iterator begin();
		iterator end();
};

template<typename Tp>
MutantStack<Tp>::MutantStack() {

}

template<typename Tp>
MutantStack<Tp>::MutantStack(const MutantStack<Tp> &cpy) {
	*this = cpy;
}

template<typename Tp>
MutantStack<Tp> &MutantStack<Tp>::operator=(const MutantStack<Tp> &other) {
	return this->std::stack<Tp>::operator=(other);
}
template<typename Tp>
MutantStack<Tp>::~MutantStack() {

}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

#endif
