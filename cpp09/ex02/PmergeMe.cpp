#include "PmergeMe.hpp"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iostream>


PmergeMe::PmergeMe(char **nbs, int len) {
	this->nbs = nbs;
	this->len = len;
}

PmergeMe::PmergeMe(const PmergeMe &cpy) {
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this == &other)
		return (*this);
	this->vect = other.vect;
	return (*this);
}

PmergeMe::~PmergeMe() {

}

typedef struct {
	long small;
	unsigned int big;
} pair_t;


static int jacob(int n) {
	static int pre_calc[] = {
		0, 1, 1, 3, 5, 11, 21, 43, 85,
		171, 341, 683, 1365, 2731, 5461,
		10923, 21845, 43691, 87381, 174763
	};
	if ((unsigned int )n < sizeof(pre_calc) / sizeof(pre_calc[0]))
		return pre_calc[n];

	return jacob(n - 1) + 2 * jacob(n - 2);
}

static void sortVectRecursive(std::vector<unsigned int> &vect) {
	if (vect.size() < 2)
		return ;
	int last = -1;
	if (vect.size() % 2) {
		last = vect.back();
		vect.pop_back();
	}

	std::vector<pair_t> pairs;
	for (size_t i = 0; i < vect.size(); i += 2) {
		int nb1 = vect[i];
		int nb2 = vect[i + 1];

		pair_t pair;
		pair.small = (nb1 < nb2) ? nb1 : nb2;
		pair.big = (nb1 < nb2) ? nb2 : nb1;
		pairs.push_back(pair);
	}

	std::vector<unsigned int> bigs;
	for (size_t i = 0; i < pairs.size(); i++)
		bigs.push_back(pairs[i].big);
	sortVectRecursive(bigs);

	std::vector<pair_t> sorted_pairs;
	for (size_t i = 0; i < bigs.size(); i++) {
		for (size_t k = 0; k < pairs.size(); k++) {
			if (pairs[k].big == bigs[i]) {
				sorted_pairs.push_back(pairs[k]);
				pairs.erase(pairs.begin() + k);
				break;
			}
		}
	}

	std::vector<unsigned int> main_chain;

	main_chain.push_back(sorted_pairs[0].small);
	main_chain.push_back(sorted_pairs[0].big);
	sorted_pairs[0].small = -1;
	for (size_t i = 1; i < sorted_pairs.size(); i++)
		main_chain.push_back(sorted_pairs[i].big);

	int n = 1;
	while (1) {
		int idx = jacob(n++) - 1;
		if (idx >= (int)sorted_pairs.size())
			break;
		if (sorted_pairs[idx].small == -1)
			continue;
		insert(main_chain, sorted_pairs[idx].small);
		sorted_pairs[idx].small = -1;
	}
	for (size_t i = 0; i< sorted_pairs.size(); i++) {
		if (sorted_pairs[i].small == -1)
			continue;
		insert(main_chain, sorted_pairs[i].small);
	}
	if (last != -1)
		insert(main_chain, last);
	vect = main_chain;
}

void PmergeMe::sortVect(void) {
	int i = -1;
	while (this->nbs[++i])
		this->vect.push_back(atoi(this->nbs[i]));
	sortVectRecursive(this->vect);
}

static void sortDequeRecursive(std::deque<unsigned int> &deque) {
	if (deque.size() < 2)
		return ;
	int last = -1;
	if (deque.size() % 2) {
		last = deque.back();
		deque.pop_back();
	}

	std::deque<pair_t> pairs;
	for (size_t i = 0; i < deque.size(); i += 2) {
		int nb1 = deque[i];
		int nb2 = deque[i + 1];

		pair_t pair;
		pair.small = (nb1 < nb2) ? nb1 : nb2;
		pair.big = (nb1 < nb2) ? nb2 : nb1;
		pairs.push_back(pair);
	}

	std::deque<unsigned int> bigs;
	for (size_t i = 0; i < pairs.size(); i++)
		bigs.push_back(pairs[i].big);
	sortDequeRecursive(bigs);

	std::deque<pair_t> sorted_pairs;
	for (size_t i = 0; i < bigs.size(); i++) {
		for (size_t k = 0; k < pairs.size(); k++) {
			if (pairs[k].big == bigs[i]) {
				sorted_pairs.push_back(pairs[k]);
				pairs.erase(pairs.begin() + k);
				break;
			}
		}
	}

	std::deque<unsigned int> main_chain;

	main_chain.push_back(sorted_pairs[0].small);
	main_chain.push_back(sorted_pairs[0].big);
	sorted_pairs[0].small = -1;
	for (size_t i = 1; i < sorted_pairs.size(); i++)
		main_chain.push_back(sorted_pairs[i].big);

	int n = 1;
	while (1) {
		int idx = jacob(n++) - 1;
		if (idx >= (int)sorted_pairs.size())
			break;
		if (sorted_pairs[idx].small == -1)
			continue;
		insert(main_chain, sorted_pairs[idx].small);
		sorted_pairs[idx].small = -1;
	}
	for (size_t i = 0; i< sorted_pairs.size(); i++) {
		if (sorted_pairs[i].small == -1)
			continue;
		insert(main_chain, sorted_pairs[i].small);
	}
	if (last != -1)
		insert(main_chain, last);
	deque = main_chain;
}

void PmergeMe::sortDeque(void) {
	int i = -1;
	while (this->nbs[++i])
		this->deque.push_back(atoi(this->nbs[i]));
	sortDequeRecursive(this->deque);
}

void PmergeMe::sort(void) {
	try {
		std::clock_t start1 = std::clock();
		this->sortVect();
		std::clock_t end1 = std::clock();
		double time1 = (end1 - start1) * 1.0 / (CLOCKS_PER_SEC / (1000 * 1000.0));

		std::clock_t start2 = std::clock();
		this->sortDeque();
		std::clock_t end2 = std::clock();
		double time2 = (end2 - start2) / (CLOCKS_PER_SEC / (1000 * 1000.0));

		std::cout << "Before:  ";
		for (int i = 0; i < len; i++)
			std::cout << atoi(this->nbs[i]) << " ";
		std::cout << std::endl;

		std::cout << "After:   ";
		for (size_t i = 0; i < this->vect.size(); i++)
			std::cout << this->vect[i] << " ";
		std::cout << std::endl;

		std::cout << "Time to process a range of " << len;
		std::cout << " elements with std::vect : " << time1 << " us" << std::endl;
		std::cout << "Time to process a range of " << len;
		std::cout << " elements with std::deque : " << time2 << " us" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return ;
	}
}
