#ifndef _SORTING_H
#define _SORTING_H
#include <vector>
#include <assert.h>
#include "Helperfunctions.h"
using namespace std;

// This function prints the content of a vector.
template<typename T> void printMe(std::vector<T> &data) {
	for (unsigned int i = 0; i < data.size(); i++) {
		cout << data[i] << " ";
	}
	cout << endl;
};

// This function determines if a vector is sorted.
template<typename T> bool isSortedAsc(std::vector<T> &data) {
	for (unsigned int i = 1; i < data.size(); i++) {
		if (data[i - 1] > data[i]) return false;
	}
	return true;
};

// This function determines if a vector is sorted descending.
template<typename T> bool isSortedDesc(std::vector<T> &data) {
	for (unsigned int i = 1; i < data.size(); i++) {
		if (data[i - 1] < data[i]) return false;
	}
	return true;
};

// This function swaps to elements.
template<typename T> void swapElements(T *a, T *b) {
	T tmp = *a;
	*a = *b;
	*b = tmp;
}


/////////////////////////////
//        Quicksort
/////////////////////////////

// This function "parts" a vector in two parts returning the partition index.
template<typename T> size_t partition(std::vector<T> &v, int left, int right) {
	size_t pivot = v[right];
	size_t pIndex = left; // partition index
	for (int i = left; i < right; i++) {
		if (v[i] <= pivot) {
			swapElements(&v[i], &v[pIndex]);
			pIndex++;
		}
	}//	void measureTime(uint64_t(*pFunc)(unsigned int), unsigned int arg, int repetitions, string label);

	swapElements(&v[pIndex], &v[right]);
	return pIndex;
}

// This function sorts a vector using the quicksort algorithm and is called by the "quicksort" function.
template<typename T>void quicksort_subroutine(std::vector<T> &v, int left, int right) {
	if (left < right) {
		T pivotindex = partition(v, left, right);
		quicksort_subroutine(v, left, pivotindex - 1);
		quicksort_subroutine(v, pivotindex + 1, right);
	}
}


/////////////////////////////
//        Mergesort
/////////////////////////////

// This function sets together two vectors in a sorted manner.
template<typename T> void merge(std::vector<T> &left, std::vector<T> &right, std::vector<T> &res) {
	unsigned int i = 0, leftIndex = 0, rightIndex = 0;
	while (i < left.size() + right.size()) {
		if (leftIndex == left.size()) {
			res[i] = right[rightIndex];
			rightIndex++;
			i++;
		}
		else
			if (rightIndex == right.size()) {
				res[i] = left[leftIndex];
				leftIndex++;
				i++;
			}
			else
				if (left[leftIndex] < right[rightIndex]) {
					res[i] = left[leftIndex];
					leftIndex++;
					i++;
				}
				else{
					res[i] = right[rightIndex];
					rightIndex++;
					i++;
				}
	}
};



/////////////////////////////
//        Heapsort
/////////////////////////////
size_t parentIndex(size_t &i) {
    assert(i >= 0);
    if(i == 0) return 0;
    return (i - 1) / 2;
}

size_t leftChildIndex(size_t &i) {
    assert(i >= 0);
    return i * 2 + 1;
}

size_t rightChildIndex(size_t &i) {
    assert(i >= 0);
    return i * 2 + 2;
}

template<typename T>
bool isLesser(T a, T b) {
    return a < b;
}

template<typename T>
bool isGreater(T a, T b) {
    return isLesser(b, a);
}

template<typename T>
bool isBinaryHeap(std::vector<T> &v, size_t start, size_t finish, bool(*funct)(T, T)) {
    for(size_t i = start; i < finish; i++) {
        size_t leftChild = leftChildIndex(i);
        size_t rightChild = leftChild + 1;
        if(leftChild < finish && funct(v[leftChild], v[i])) return false;
        if(rightChild >= finish) return true;
        if(funct(v[rightChild], v[i])) return false;
    }
    return true;
}

template<typename T>
void siftDown(std::vector<T> &v, size_t start, size_t finish, bool(*funct)(T, T)) {
    assert(v.size() > 0);
    size_t newElementIndex = start;

    while(true) {
    size_t leftChild = leftChildIndex(newElementIndex);
    size_t rightChild = leftChild + 1;
        if(leftChild >= finish) break;
        if(rightChild < finish && funct(v[rightChild], v[leftChild])) leftChild = rightChild;

        if(funct(v[leftChild], v[newElementIndex])) swap(v[newElementIndex], v[leftChild]);
        else break;
        newElementIndex = leftChild;
    }
}

template<typename T>
void heapify(std::vector<T> &v, size_t start, bool(*funct)(T, T)) {
    assert(v.size() > 0);
    size_t newElementIndex = start;
    for(size_t i = start/2; ; i--) {
        size_t leftChild = leftChildIndex(newElementIndex);
        size_t rightChild = leftChild + 1;
        assert(isBinaryHeap(v, leftChild, start, funct) && isBinaryHeap(v, rightChild, start, funct));
        siftDown(v, i, start, funct);
        if(i == 0) return;
    }
    assert(isBinaryHeap(v, 0, start, funct));
}

template<typename T>
void heapsort_helper(std::vector<T> &v, bool(*funct)(T, T)) {
    if(v.size() < 2) return;
    size_t root = 0;
    heapify(v, v.size(), funct);

    for(size_t i = v.size() - 1; i > 0; i--) {
        swap(v[root], v[i]);
        siftDown(v, root, i, funct);
    }
}

#endif
