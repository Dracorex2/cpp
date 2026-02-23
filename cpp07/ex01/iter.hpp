#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *adr, const int len, void (*func)(T &)) {
	for (int i = 0; i < len; i++) {
		func(adr[i]);
	}
}

template <typename T>
void iter(const T *adr, const int len, void (*func)(const T &)) {
	for (int i = 0; i < len; i++) {
		func(adr[i]);
	}
}

#endif
