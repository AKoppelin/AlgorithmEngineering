#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include "gtest/gtest.h"
using namespace std;

/// This function computes the n-th Fibonacci number recursively.
//	It runs in exponential time in n and needs exponential memory.
long double computeNthFibonacciNumber1(int n) {
	assert(n >= 0);
	if (n == 0) {
		return 0;
	}else if(n == 1) {
		return 1;
	}
	else{
		return computeNthFibonacciNumber1(n - 1) + computeNthFibonacciNumber1(n - 2);
	}
}



/// This function computes the n-th Fibonacci number in linear time
/// in n and needs linear memory.
long double computeNthFibonacciNumber2(int n) {
	//long double * arr = new long double[n + 1];	// a dynamic array size can only be initialized this way

	//assert(n >= 0);

	//arr[0] = 0;
	//arr[1] = 1;
	//for (int i = 2; i <= n; i++) {
	//	arr[i] = arr[i - 1] + arr[i - 2];
	//}
	//return arr[n];
	std::vector<long double> v;

	if (n == 0) return 0;
	if (n == 1) return 1;

	long double result = 0;
	v.push_back(0);
	v.push_back(1);

	for (int i = 2; i <= n; i++) {
		result = v.at(i - 1) + v.at(i - 2);
		v.push_back(result);
	}
	v.clear();
	return result;
}


/// This function computes the n-th Fibonacci number in linear time
/// in n and needs constant memory.
long double computeNthFibonacciNumber3(int n) {
	long double result, first, second;

	assert(n >= 0);

	first = 0;
	second = 1;

	if (n == 0) result = 0;
	if (n == 1) result = 1;
	for (int i = 2; i <= n; i++) {
		result = first + second;
		first = second;
		second = result;
	}
	return result;
}

/// not yet implemented
long double computeNthFibonacciNumber4(int n) {
	return 1;
}

/// This function computes the n-th Fibonacci number using the closed form.
long double computeNthFibonacciNumber5(int n) {
	assert(n >= 0);

	long double res = floorl((1.0 / sqrt(5.0)) * powl((1.0 + sqrt(5.0)) / 2.0, n) + 1.0 / 2.0);
	return res;
}


/// This function fills a created lookup table with the first 1476 Fibonacci numbers.
std::map <int, long double> fiboLUT;
void initFiboLUT() {
	for (int i = 0; i <= 1476; i++) { /// n = 1476 is the greatest number thats doesn't cause an overflow
		fiboLUT[i] = computeNthFibonacciNumber3(i);
	}
}

/// This function computes the n-th Fibonacci number using a lookup table.
long double computeNthFibonacciNumber6(int n) {
	assert(n >= 0);
	return fiboLUT[n];
}


int main(int argc, char** argv) {
	initFiboLUT();
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	cin.get();

	return 0;
}

