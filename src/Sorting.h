#ifndef _SORTING_H
#define _SORTING_H
#include <vector>
#include <assert.h>
#include "Helperfunctions.h"
using namespace std;

//class Sorting {
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

// This function swaps to elements.
template<typename T> void swapElements(T *a, T *b) {
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

// This function sorts a vector using insertionsort algorithm.
template<typename T> void insertionsort(std::vector<T> &v) {
	for (unsigned int i = 1; i < v.size(); i++) {
		int j = i;
		while (j && v[j - 1] > v[j]) {
			swapElements(&v[j - 1], &v[j]);
			j--;
		}
	}
}

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

// This function sets the left and right borders of the vector and calls the actual quicksort algorithm (quicksort_subroutine).
template<typename T>void quicksort(std::vector<T> &v) {
    size_t left = 0;
    size_t right = v.size() - 1;
    quicksort_subroutine(v, left, right);
}

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

/////////////////////////////
//        Heapsort
/////////////////////////////
//size_t parentIndex(size_t &i) {
//    assert(i >= 0);
//    if(i == 0) return 0;
//    return (i - 1) / 2;
//}
//
//size_t leftIndex(size_t &i) {
//    assert(i >= 0);
//    return i * 2 + 1;
//}
//
//size_t rightIndex(size_t &i) {
//    assert(i >= 0);
//    return i * 2 + 2;
//}
//
//template<typename T> bool isHeap(std::vector<T> &data) {
//    for(size_t i = 0; i < data.size(); i++) {
//        if(data[i] < data[parentIndex(i)]) return false;
//    }
//    return true;
//};
//
//template<typename T> void siftUp(T &data) {
//    assert(data.size() > 0); // siftUp on an empty vector is useless
////    std::vector<T> oldVector = createSubvector(data, 0, (data.size() - 1));
////    assert(isHeap(oldVector));
//
//    size_t newElementIndex = data.size() - 1;
//    while(true) {
//        if(newElementIndex == 0) break;
//        size_t parentIdx = parentIndex(newElementIndex);
//        cout << "Parent-Index: " << parentIdx << endl;
//        cout << "Data[ParentIdx]: " << data[parentIdx] << ", " << "Data[newElementIndex]: " << data[newElementIndex] << endl;
//        if(data[parentIdx] < data[newElementIndex]) break;
//        swap(data[parentIdx], data[newElementIndex]);
//        cout << "Data[ParentIdx]:" << data[parentIdx] << ", " << "Data[newElementIndex]: " << data[newElementIndex] << endl;
//        newElementIndex = parentIdx;
//    }
//    assert(isHeap(data));
//}
//
//template<typename T>
//void siftDown(T &data) {
//    assert(data.size() > 0);
//
//    size_t newElementIndex = 0;
//
//    while(true) {
//        size_t leftIdx = leftIndex(newElementIndex);
//
//        if(leftIdx >= data.size()) break;
//        size_t rightIdx = leftIdx + 1;
//
//        if(rightIdx < data.size() && data[rightIdx] < data[leftIdx]) {
//            leftIdx = rightIdx;
//        }
//
//        if(data[leftIdx] > data[newElementIndex]) break;
//        swap(data[leftIdx], data[rightIdx]);
//        newElementIndex = leftIdx;
//    }
//
//    assert(isHeap(data));
//}
//};
#endif
