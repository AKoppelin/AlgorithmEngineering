#include <iostream>
#include <cmath>
#include <cstdint>
#include <map>
#include <vector>
#include "Matrix.h"
//#include "Meter.h"

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

// Unittests for function computeNthFibonacciNumber1()
#ifdef TEST_RUN
// Test cases for function 'computeNthFibonacciNumber1'.
TEST(FibonacciTest, computeNthFibonacciNumber1) {
	ASSERT_EQ(computeNthFibonacciNumber1(0), 0);
	ASSERT_EQ(computeNthFibonacciNumber1(1), 1);
	ASSERT_EQ(computeNthFibonacciNumber1(2), 1);
	ASSERT_EQ(computeNthFibonacciNumber1(3), 2);
	ASSERT_EQ(computeNthFibonacciNumber1(4), 3);
	ASSERT_EQ(computeNthFibonacciNumber1(5), 5);
	ASSERT_EQ(computeNthFibonacciNumber1(6), 8);
}
#endif // TEST_RUN


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

#ifdef TEST_RUN
// Test cases for function 'computeNthFibonacciNumber2'.
TEST(FibonacciTest, computeNthFibonacciNumber2) {
	ASSERT_EQ(computeNthFibonacciNumber2(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(computeNthFibonacciNumber2(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(computeNthFibonacciNumber2(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(computeNthFibonacciNumber2(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(computeNthFibonacciNumber2(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(computeNthFibonacciNumber2(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(computeNthFibonacciNumber2(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(computeNthFibonacciNumber2(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(computeNthFibonacciNumber2(43), 433494437);
}
#endif // TEST_RUN


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





#ifdef TEST_RUN
// Test cases for function 'computeNthFibonacciNumber3'.
TEST(FibonacciTest, computeNthFibonacciNumber3) {
	ASSERT_EQ(computeNthFibonacciNumber3(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(computeNthFibonacciNumber3(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(computeNthFibonacciNumber3(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(computeNthFibonacciNumber3(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(computeNthFibonacciNumber3(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(computeNthFibonacciNumber3(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(computeNthFibonacciNumber3(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(computeNthFibonacciNumber3(43), 433494437);
}
#endif // TEST_RUN

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


#ifdef TEST_RUN
TEST(FibonacciTest, computeNthFibonacciNumber4) {
	ASSERT_EQ(computeNthFibonacciNumber4(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(computeNthFibonacciNumber4(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(computeNthFibonacciNumber4(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(computeNthFibonacciNumber4(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(computeNthFibonacciNumber4(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(computeNthFibonacciNumber4(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(computeNthFibonacciNumber4(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(computeNthFibonacciNumber4(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(computeNthFibonacciNumber4(43), 433494437);
}
#endif // TEST_RUN

// This function computes the n-th Fibonacci number using the closed form.
uint64_t computeNthFibonacciNumber5(unsigned int n) {
//	assert(n < 47);
	unsigned int res = (unsigned int) floorl((1.0 / sqrt(5.0)) * powl((1.0 + sqrt(5.0)) / 2.0, n) + 1.0 / 2.0);
	return res;
}
#ifdef TEST_RUN

/// 
TEST(FibonacciTest, computeNthFibonacciNumber5) {
	ASSERT_EQ(computeNthFibonacciNumber5(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(computeNthFibonacciNumber5(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(computeNthFibonacciNumber5(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(computeNthFibonacciNumber5(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(computeNthFibonacciNumber5(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(computeNthFibonacciNumber5(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(computeNthFibonacciNumber5(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(computeNthFibonacciNumber5(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(computeNthFibonacciNumber5(43), 433494437);
}
#endif // TEST_RUN

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

#ifdef TEST_RUN
TEST(FibonacciTest, computeNthFibonacciNumber6) {
	ASSERT_EQ(computeNthFibonacciNumber6(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(computeNthFibonacciNumber6(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(computeNthFibonacciNumber6(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(computeNthFibonacciNumber6(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(computeNthFibonacciNumber6(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(computeNthFibonacciNumber6(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(computeNthFibonacciNumber6(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(computeNthFibonacciNumber6(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(computeNthFibonacciNumber6(43), 433494437);
}
#endif // TEST_RUN

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
TEST(FibonacciTest, computeNthFibonacciNumber7) {
	ASSERT_EQ(computeNthFibonacciNumber7(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(computeNthFibonacciNumber7(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(computeNthFibonacciNumber7(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(computeNthFibonacciNumber7(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(computeNthFibonacciNumber7(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(computeNthFibonacciNumber7(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(computeNthFibonacciNumber7(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(computeNthFibonacciNumber7(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(computeNthFibonacciNumber7(43), 433494437);

}
#endif // TEST_RUN


int main(
#ifdef TEST_RUN
int argc, char **argv
#endif
) {
	initFiboLUT();
#ifdef TEST_RUN
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
#else
	return 0;
#endif // TEST_RUN
}
