#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
class Span {
	private:
		std::vector<int> vals;
		unsigned int max;
	public:
		Span();
		Span(int i);
		Span(Span &cpy);
		Span operator=(Span &oter);
		~Span();
		void addNumber(int nb);
		void addRange(std::vector<int>::iterator beg, std::vector<int>::iterator end);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
};

#endif
