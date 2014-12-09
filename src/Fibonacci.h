#ifndef _FIBONACCI_H
#define _FIBONACCI_H
#include <iostream>
#include <cmath>
#include <cstdint>
#include <map>
#include <vector>
#include "Matrix.h"

class Fibonacci {
private:
	std::map <int, uint64_t> fiboLUT;

public:
//	Fibonacci();
//	~Fibonacci();
	uint64_t computeNthFibonacciNumber1(unsigned int);
	uint64_t computeNthFibonacciNumber2(unsigned int);
	uint64_t computeNthFibonacciNumber3(unsigned int);
	uint64_t computeNthFibonacciNumber4(unsigned int);
	uint64_t computeNthFibonacciNumber5(unsigned int);
	uint64_t computeNthFibonacciNumber6(unsigned int);
	uint64_t computeNthFibonacciNumber7(unsigned int);
	void initFiboLUT();
};

#endif
