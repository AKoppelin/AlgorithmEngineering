#include <iostream>
#include <cmath>
#include <cstdint>
#include <map>
#include <vector>
#include "Matrix.h"
#include "Meter.h"
//#include "gtest/gtest.h"

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
	
	vector<vector<int> > fiboData(2, vector<int>(2));
	vector<vector<int> > fiboVect(2, vector<int>(1));

	/// initialize matrix
	fiboData[0][0] = 0;
	fiboData[0][1] = fiboData[1][0] = fiboData[1][1] = 1;

	/// initialize vector
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

	vector<vector<int> > fiboData(2, vector<int>(2));
	vector<vector<int> > fiboVect(2, vector<int>(1));

	/// initialize matrix
	fiboData[0][0] = 0;
	fiboData[0][1] = fiboData[1][0] = fiboData[1][1] = 1;

	/// initialize vector
	fiboVect[0][0] = 0;
	fiboVect[1][0] = 1;

	Matrix m = Matrix(2, 2, fiboData);
	Matrix v = Matrix(2, 1, fiboVect);

	m = m.exponentiationBySquaringIterative(n - 1);
	return m.getElementAt(1, 1);
}


int main(int argc, char** argv) {
	initFiboLUT();
	//testing::InitGoogleTest(&argc, argv);
	//RUN_ALL_TESTS();
//#ifdef MEASUREMENTS
	Meter meter = Meter();
	cout << "Starting measurements ..." << endl;
	for (int i = 0; i < 45; i++) {
		meter.measureTime(computeNthFibonacciNumber1, i, 10, "nthFibonacciNumber1");
	}
	for (int i = 0; i < 94; i++) {
		meter.measureTime(computeNthFibonacciNumber2, i, 10, "nthFibonacciNumber2");
	}
	for (int i = 0; i < 94; i++) {
		meter.measureTime(computeNthFibonacciNumber3, i, 10, "nthFibonacciNumber3");
	}
	for (int i = 0; i < 47; i++) {
		meter.measureTime(computeNthFibonacciNumber4, i, 10, "nthFibonacciNumber4");
	}
	for (int i = 0; i < 94; i++) {
		meter.measureTime(computeNthFibonacciNumber5, i, 10, "nthFibonacciNumber5");
	}
	for (int i = 0; i < 94; i++) {
		meter.measureTime(computeNthFibonacciNumber6, i, 10, "nthFibonacciNumber6");
	}
	for (int i = 0; i < 47; i++) {
		meter.measureTime(computeNthFibonacciNumber7, i, 10, "nthFibonacciNumber7");
	}
	cout << "Finished measurements." << endl;
	

//#endif

	return 0;
}

