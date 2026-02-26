#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span() {
	this->max = 0;
}
Span::Span(unsigned int i) {
	this->max = i;
}
Span::Span(const Span &cpy) {
	*this = cpy;
}
Span Span::operator=(const Span &other) {
	this->max = other.max;
	this->vals = other.vals;
	return *this;
}
Span::~Span() {

}

void Span::addNumber(int nb) {
	if (this->vals.size() == this->max)
		throw std::runtime_error("Span already full");
	this->vals.push_back(nb);
	std::sort(this->vals.begin(), this->vals.end());
}

void Span::addRange(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
	while (beg != end) {
		if (this->vals.size() == this->max)
			throw std::runtime_error("Span already full");
		this->vals.push_back(*beg);
		beg++;
	}
	std::sort(this->vals.begin(), this->vals.end());
}

unsigned int Span::shortestSpan(void) const {
	size_t i = 0;
	unsigned int shortest_span = this->longestSpan();
	while (i + 1 < this->vals.size()) {
		unsigned int actual_span = this->vals[i + 1] - this->vals[i];
		if (actual_span < shortest_span)
			shortest_span = actual_span;
		i++;
	}
	return shortest_span;
}

unsigned int Span::longestSpan(void) const {
	if (this->vals.size() < 2)
		throw std::runtime_error("No Span");
	return this->vals[this->vals.size() - 1] - this->vals[0];
}
