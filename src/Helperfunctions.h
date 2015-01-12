#ifndef _HELPERFUNCTIONS_H
#define _HELPERFUNCTIONS_H
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <vector>

using namespace std;

std::vector<size_t> createOrderedVector(size_t size) {
	std::vector<size_t> res;
	for(size_t i = 0; i < size; i++) {
		res.push_back(i);
	}
	return res;
}

std::vector<size_t> createReverseOrderedVector(size_t size) {
	std::vector<size_t> res;
	for(size_t i = 0; i < size; i++) {
		res.insert(res.begin(), i);
	}
	return res;
}

std::vector<size_t> createPermutedVector(size_t size) {
	std::vector<size_t> res;
	res = createOrderedVector(size);
	random_shuffle(res.begin(), res.end());
	return res;
}

std::vector<size_t> createVectorWithRepeatedElements(size_t size, int init) {
	srand(init);
	std::vector<size_t> res;
	for(size_t i = 0; i < size; i++) {
		res.push_back(rand() & size/10);
	}
	return res;
}

std::vector<size_t> createRandomizedVector(size_t size, int init) {
	srand(init);
	std::vector<size_t> res;
	for(size_t i = 0; i < size; i++) {
		res.push_back(rand()%10000);
	}
	return res;
}

template<typename T> std::vector<T> createSubvector(const std::vector<T> &data, size_t start, size_t stop) {
    typename std::vector<T>::const_iterator first = data.begin() + start;
    typename std::vector<T>::const_iterator last = data.begin() + stop;

    std::vector<T> returnVector(first, last);
    return returnVector;
}
#endif
