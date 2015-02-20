#include <iostream>
#include <cmath>
#include <cstdint>
#include <map>
#include <vector>
#ifdef MEASURE
#include "SortingNoRef.h"
#else
#include "SortingRef.h"
#endif

#include "Meter.h"
#ifdef MEASURE
#include "Meter.h"
#endif
#include "Matrix.h"
#include "Helperfunctions.h"


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
	return 0;
#endif
}

