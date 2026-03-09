#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <algorithm>

template <typename Container>
void insert(Container& cont, const typename Container::value_type &val)
{
    if (cont.empty()) {
        cont.push_back(val);
        return;
    }

    if (val > cont.back()) {
        cont.push_back(val);
        return;
    }

    if (val < cont.front()) {
        cont.insert(cont.begin(), val);
        return;
    }

    auto it = std::lower_bound(cont.begin(), cont.end(), val);
    cont.insert(it, val);
}

class PmergeMe {
	private:
		char **nbs;
		int len;
		std::vector<unsigned int> vect;
		std::deque<unsigned int> deque;
		PmergeMe();
		void sortVect(void);
		void sortDeque(void);
	public:
		PmergeMe(char **nbs, int len);
		PmergeMe(const PmergeMe &cpy);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		void sort(void);
};

#endif
