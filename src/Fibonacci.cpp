#include <iostream>
#include <cmath>
#include <cstdint>
#include <map>
#include <vector>
#include "Matrix.h"
#include "Helperfunctions.h"
#include "Meter.h"
#ifdef MEASURE
#include "Meter.h"
#endif

#ifdef MEASURE
#include "SortingNoRef.h"
#else
#include "Sorting.h"
#endif

#ifdef TEST_RUN
#include <gtest/gtest.h>
#endif // TEST_RUN

using namespace std;

// This function computes the n-th Fibonacci number recursively.
//	It runs in exponential time in n and needs exponential memory.
uint64_t computeNthFibonacciNumber1(unsigned int n) {
	if (n < 2) return n;
	return computeNthFibonacciNumber1(n - 1) + computeNthFibonacciNumber1(n - 2);
}

// This function computes the n-th Fibonacci number in linear time
// in n and needs linear memory.
uint64_t computeNthFibonacciNumber2(unsigned int n) {
	if (n < 2) return n;

	std::vector<uint64_t> v;
	uint64_t result = 0;

	v.push_back(0);
	v.push_back(1);

	for (unsigned int i = 2; i <= n; i++) {
		result = v.at(i - 1) + v.at(i - 2);
		v.push_back(result);
	}
	v.clear();
	return result;
}


// This function computes the n-th Fibonacci number in linear time
// in n and needs constant memory.
uint64_t computeNthFibonacciNumber3(unsigned int n) {
	uint64_t result, first, second;

	first = 0;
	second = 1;

	if (n == 0) result = 0;
	if (n == 1) result = 1;

	for (unsigned int i = 2; i <= n; i++) {

		result = first + second;

		first = second;

		second = result;

	}
	return result;

}

// This function computes the n-th Fibonacci number using a matrix.
uint64_t computeNthFibonacciNumber4(unsigned int n) {

	if (n < 2) return n;

	vector<vector<uint64_t> > fiboData(2, vector<uint64_t>(2));
	vector<vector<uint64_t> > fiboVect(2, vector<uint64_t>(1));

	// initialize matrix
	fiboData[0][0] = 0;
	fiboData[0][1] = fiboData[1][0] = fiboData[1][1] = 1;

	// initialize vector
	fiboVect[0][0] = 0;
	fiboVect[1][0] = 1;

	Matrix m = Matrix(2, 2, fiboData);
	Matrix v = Matrix(2, 1, fiboVect);

	m = m.exponentiationBySquaring(n - 1);
	return m.getElementAt(1, 1);
}

// This function computes the n-th Fibonacci number using the closed form.
uint64_t computeNthFibonacciNumber5(unsigned int n) {
//	assert(n < 47);
	unsigned int res = (unsigned int) floorl((1.0 / sqrt(5.0)) * powl((1.0 + sqrt(5.0)) / 2.0, n) + 1.0 / 2.0);
	return res;
}

// This function fills a created lookup table with the first 1476 Fibonacci numbers.
std::map <int, uint64_t> fiboLUT;
void initFiboLUT() {
	for (int i = 0; i <= 93; i++) { /// n = 93 is the greatest number thats doesn't cause an overflow
		fiboLUT[i] = computeNthFibonacciNumber3(i);
	}
}

// This function computes the n-th Fibonacci number using a lookup table.
uint64_t computeNthFibonacciNumber6(unsigned int n) {
	return fiboLUT[n];
}

uint64_t computeNthFibonacciNumber7(unsigned int n) {
	if (n < 2) return n;
	vector<vector<uint64_t> > fiboData(2, vector<uint64_t>(2));
	vector<vector<uint64_t> > fiboVect(2, vector<uint64_t>(1));

	// initialize matrix
	fiboData[0][0] = 0;
	fiboData[0][1] = fiboData[1][0] = fiboData[1][1] = 1;

	// initialize vector
	fiboVect[0][0] = 0;
	fiboVect[1][0] = 1;

	Matrix m = Matrix(2, 2, fiboData);
	Matrix v = Matrix(2, 1, fiboVect);

	m = m.exponentiationBySquaringIterative(n - 1);
	return m.getElementAt(1, 1);
}
#ifdef TEST_RUN
#include "Tests_Fibonacci.h"
#include "Tests_Sorting.h"
#endif // TEST_RUN

int main(int argc, char **argv) {
	initFiboLUT();
#ifdef TEST_RUN
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
#elif MEASURE

// Measuring of fibonacci algorithms
#include "MeasureTimeFibonacci.h"
#include "MeasureCyclesFibonacci.h"

//  Measuring of sorting algorithms
#include "MeasureTimeSorting.h"
#include "MeasureCyclesSorting.h"
    return 0;

#else
//	std::vector<size_t> res1 = createOrderedVector(25);
//	std::vector<size_t> res2 = createReverseOrderedVector(25);
//	std::vector<size_t> res3 = createPermutedVector(25);
//	std::vector<size_t> res4 = createRandomizedVector(25, 1);
//	std::vector<size_t> res5 = createVectorWithRepeatedElements(25, 1);

//	insertionsort(res1);
//	printMe(res1);
//	cout << "Insertionsort Res1: " << isSortedAsc(res1) << endl << endl;

//	insertionsort(res2);
//	printMe(res2);
//	cout << "Insertionsort Res2: " << isSortedAsc(res2) << endl << endl;

//	insertionsort(res3);
//	printMe(res3);
//	cout << "Insertionsort Res3: " << isSortedAsc(res3) << endl << endl;

//	insertionsort(res4);
//	printMe(res4);
//	cout << "Insertionsort Res4: " << isSortedAsc(res4) << endl << endl;

//	insertionsort(res5);
//	printMe(res5);
//	cout << "Insertionsort Res5: " << isSortedAsc(res5) << endl << endl;

//	printMe(res1);
//	quicksort(res1);
//	printMe(res1);
//	cout << "Quicksort Res1: " << isSortedAsc(res1) << endl << endl;

//	printMe(res2);
//	quicksort(res2);
//	printMe(res2);
//	cout << "Quicksort Res2: " << isSortedAsc(res2) << endl << endl;

//	printMe(res3);
//	quicksort(res3);
//	printMe(res3);
//	cout << "Quicksort Res3: " << isSortedAsc(res3) << endl << endl;

//	printMe(res4);
//	quicksort(res4);
//	printMe(res4);
//	cout << "Quicksort Res4: " << isSortedAsc(res4) << endl << endl;

//	printMe(res5);
//	quicksort(res5);
//	printMe(res5);
//	cout << "Quicksort Res5: " << isSortedAsc(res5) << endl << endl;


//	mergesort(res1);
//	printMe(res1);
//	cout << "Mergesort Res1: " << isSortedAsc(res1) << endl << endl;

//	mergesort(res2);
//	printMe(res2);
//	cout << "Mergesort Res2: " << isSortedAsc(res2) << endl << endl;

//	mergesort(res3);
//	printMe(res3);
//	cout << "Mergesort Res3: " << isSortedAsc(res3) << endl << endl;

//	mergesort(res4);
//	printMe(res4);
//	cout << "Mergesort Res4: " << isSortedAsc(res4) << endl << endl;

//	mergesort(res5);
//	printMe(res5);
//	cout << "Mergesort Res5: " << isSortedAsc(res5) << endl << endl;
//
//    std::vector<int> a;
//    a.push_back(1);
//    a.push_back(3);
//    a.push_back(-123);
//    a.push_back(4);
//    a.push_back(12);
//    a.push_back(42);
//    a.push_back(42);
//    a.push_back(13);
//    a.push_back(21);
//    printMe(a);
//    cout << isSortedAsc(a) << endl;
//    insertionsort(a);
//    printMe(a);
//    cout << isSortedAsc(a) << endl;
//    meterSortingTime.measureTime<void, std::vector<size_t>& >(93861, 1, "InsertionsortOrdered", insertionsort, a);
////
//    cout << endl << endl;
////    printMe(a);
//    cout << endl;
//    a.push_back(11);
//    printMe(a);
//    siftUp(a);
//    printMe(a);
////    std::vector<int> b = createSubvector(a, 0, (a.size() - 1));
////    if(isHeap(a)) {
////        cout << "a ist ein Heap";
////    }else{
////        cout << "a ist kein Heap";
////    }
//    cout << endl << endl;
//    std::vector<size_t> vInsertReversed = createReverseOrderedVector(93861);
//    printMe(vInsertReversed);
//    cout << isSortedAsc(vInsertReversed) << endl;
//    printMe(vInsertReversed);

//    Stopwatch s;
//    s.start();
//    insertionsort(vInsertReversed);
////    isSortedAsc(vInsertReversed);
//    s.stop();
//    s.reset();
//    cout << "Dauer: " << s.getValue() << endl << endl;
//
////    printMe(vInsertReversed);
////    cout << isSortedAsc(vInsertReversed) << endl;
////    printMe(vInsertReversed);
//
//    std::vector<size_t> vInsertReversed1 = createReverseOrderedVector(93861);
////    Stopwatch s;
//    s.start();
//    mergesort(vInsertReversed1);
//    s.stop();
//    s.peekStart();
//    s.peekStop();
//    s.reset();
//    cout << "Dauer: " << s.getValue() << endl << endl;
////    isSortedAsc(vInsertReversed);
//
//    std::vector<size_t> vInsertReversed2 = createReverseOrderedVector(93861);
////    Stopwatch s;
//    s.start();
//    quicksort(vInsertReversed1);
//    s.stop();
//    s.peekStart();
//    s.peekStop();
//    s.reset();
//    cout << "Dauer: " << s.getValue() << endl << endl;
//    Meter meterSortingTime = Meter();
//    std::vector<size_t> vInsertOrdered = createOrderedVector(93861);
//    meterSortingTime.measureTime<void, std::vector<size_t>& >(93861, 1, "InsertionsortOrdered", insertionsort, vInsertOrdered);
//    vInsertOrdered.erase(vInsertOrdered.begin(), vInsertOrdered.begin() + vInsertOrdered.size());
//	cout << vInsertOrdered << endl;
	return 0;
#endif
}
