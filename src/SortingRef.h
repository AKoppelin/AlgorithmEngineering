#ifndef _SORTINGREF_H
#define _SORTINGREF_H
#include <vector>
#include <assert.h>
#include "Helperfunctions.h"
#include "Sorting.h"
using namespace std;

// This function sorts a vector using insertionsort algorithm.
template<typename T>
void insertionsort(std::vector<T> &v) {
//	for (unsigned int i = 1; i < v.size(); i++) {
//		int j = i;
//		while (j && v[j - 1] > v[j]) {
//			swapElements(&v[j - 1], &v[j]);
//			j--;
//		}
//	}
    insertionsort_subroutine(v, 1, v.size() - 1);
}

// This function sets the left and right borders of the vector and calls the actual quicksort algorithm (quicksort_subroutine).
template<typename T>
void quicksort(std::vector<T> &v) {
    size_t left = 0;
    size_t right = v.size() - 1;
    quicksort_subroutine(v, left, right);
}

// This function sets the left and right borders of the vector and calls the actual quicksort algorithm for random pivot elements.
template<typename T>
void quicksort1(std::vector<T> &v) {
    size_t left = 0;
    size_t right = v.size() - 1;
    quicksort_subroutine_random(v, left, right);
}

// This function checks if a vector is in ascending order and calls the actual quicksort algorithm only if this is not the case.
template<typename T>
void quicksort2(std::vector<T> &v) {
    if(isSortedAsc(v)) return;

    size_t left = 0;
    size_t right = v.size() - 1;
    quicksort_subroutine_random(v, left, right);
}

// This function the actual quicksort algorithm that uses fat partitioning for performance reasons.
template<typename T>
void quicksort3(std::vector<T> &v) {
    size_t left = 0;
    size_t right = v.size();
    quicksort_subroutine_fat(v, left, right);
}


// This function sorts a vector using the mergesort algorithm.
template<typename T> void mergesort(std::vector<T> &data) {
	if (data.size() > 1) {
		int middle = data.size() / 2;
		//std::vector<T>::const_iterator first = data.begin();
		typename std::vector<T>::const_iterator first = data.begin();
		typename std::vector<T>::const_iterator last = data.begin() + middle;
		std::vector<T> left(first, last);
		first = data.begin() + middle;
		last = data.begin() + data.size();
		std::vector<T> right(first, last);
		mergesort(left);
		mergesort(right);
		merge(left, right, data);
	}
};

// This functions sorts a vector ascending using the heapsort algorithm.
template<typename T>
void heapsortAsc(std::vector<T> &v) {
    heapsort_subroutine(v, isGreater<size_t>);
    assert(isSortedAsc(v));
}

// This functions sorts a vector descending using the heapsort algorithm.
template<typename T>
void heapsortDesc(std::vector<T> &v) {
    heapsort_subroutine(v, isLesser<size_t>);
    assert(isSortedDesc(v));
}

#endif
