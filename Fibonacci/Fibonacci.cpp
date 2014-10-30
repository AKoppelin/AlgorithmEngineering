#include <iostream>
#include "gtest/gtest.h"
using namespace std;

/// This function computes the n-th Fibonacci number recursively.
//	It runs in exponential time in n and needs exponential memory.
int computeNthFibonacciNumber1(int n) {
	if (n == 0) {
		return 0;
	}else if(n == 1) {
		return 1;
	}
	else{
		return computeNthFibonacciNumber1(n - 1) + computeNthFibonacciNumber1(n - 2);
	}
}


// Test cases for function 'computeNthFibonacciNumber1'.
TEST(Fibo1, nIs0) {
	ASSERT_EQ(computeNthFibonacciNumber1(0), 0);
}

TEST(Fibo1, nIs1) {
	ASSERT_EQ(computeNthFibonacciNumber1(1), 1);
}

TEST(Fibo1, nIs2) {
	ASSERT_EQ(computeNthFibonacciNumber1(2), 1);
}

TEST(Fibo1, nIs3) {
	ASSERT_EQ(computeNthFibonacciNumber1(3), 2);
}

TEST(Fibo1, nIs4) {
	ASSERT_EQ(computeNthFibonacciNumber1(4), 3);
}

TEST(Fibo1, nIs5) {
	ASSERT_EQ(computeNthFibonacciNumber1(5), 5);
}

TEST(Fibo1, nIs6) {
	ASSERT_EQ(computeNthFibonacciNumber1(6), 8);
}

TEST(Fibo1, nIs30) {
	ASSERT_EQ(computeNthFibonacciNumber1(30), 832040);
}

TEST(Fibo1, nIs43) {
	ASSERT_EQ(computeNthFibonacciNumber1(43), 433494437);
}

/// This function computes the n-th Fibonacci number in linear time
/// in n and needs linear memory.
int computeNthFibonacciNumber2(int n) {
	int* arr = new int[n];	// a dynamic array size can only be initialized this way

	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}

// Test cases for function 'computeNthFibonacciNumber2'.
TEST(Fibo2, nIs0) {
	ASSERT_EQ(computeNthFibonacciNumber2(0), computeNthFibonacciNumber1(0));
}

TEST(Fibo2, nIs1) {
	ASSERT_EQ(computeNthFibonacciNumber2(1), computeNthFibonacciNumber1(1));
}

TEST(Fibo2, nIs2) {
	ASSERT_EQ(computeNthFibonacciNumber2(2), computeNthFibonacciNumber1(2));
}

TEST(Fibo2, nIs3) {
	ASSERT_EQ(computeNthFibonacciNumber2(3), computeNthFibonacciNumber1(3));
}

TEST(Fibo2, nIs4) {
	ASSERT_EQ(computeNthFibonacciNumber2(4), computeNthFibonacciNumber1(4));
}

TEST(Fibo2, nIs5) {
	ASSERT_EQ(computeNthFibonacciNumber2(5), computeNthFibonacciNumber1(5));
}

TEST(Fibo2, nIs6) {
	ASSERT_EQ(computeNthFibonacciNumber2(6), computeNthFibonacciNumber1(6));
}

TEST(Fibo2, nIs30) {
	ASSERT_EQ(computeNthFibonacciNumber2(30), computeNthFibonacciNumber1(30));
}

TEST(Fibo2, nIs43) {
	ASSERT_EQ(computeNthFibonacciNumber2(43), 433494437);
}

/// This function computes the n-th Fibonacci number in linear time
/// in n and needs constant memory.
int computeNthFibonacciNumber3(int n) {
	int arr[3];

	arr[0] = 0;
	arr[1] = 1;

	if (n < 2) {
		arr[2] = arr[n];
	}
	for (int i = 2; i <= n; i++) {
		arr[2] = arr[1] + arr[0];
		arr[0] = arr[1];
		arr[1] = arr[2];
	}
	return arr[2];
}

// Test cases for function 'computeNthFibonacciNumber3'.
TEST(Fibo3, nIs0) {
	ASSERT_EQ(computeNthFibonacciNumber3(0), computeNthFibonacciNumber1(0));
}

TEST(Fibo3, nIs1) {
	ASSERT_EQ(computeNthFibonacciNumber3(1), computeNthFibonacciNumber1(1));
}

TEST(Fibo3, nIs2) {
	ASSERT_EQ(computeNthFibonacciNumber3(2), computeNthFibonacciNumber1(2));
}

TEST(Fibo3, nIs3) {
	ASSERT_EQ(computeNthFibonacciNumber3(3), computeNthFibonacciNumber1(3));
}

TEST(Fibo3, nIs4) {
	ASSERT_EQ(computeNthFibonacciNumber3(4), computeNthFibonacciNumber1(4));
}

TEST(Fibo3, nIs5) {
	ASSERT_EQ(computeNthFibonacciNumber3(5), computeNthFibonacciNumber1(5));
}

TEST(Fibo3, nIs6) {
	ASSERT_EQ(computeNthFibonacciNumber3(6), computeNthFibonacciNumber1(6));
}

TEST(Fibo3, nIs30) {
	ASSERT_EQ(computeNthFibonacciNumber3(30), computeNthFibonacciNumber1(30));
}

TEST(Fibo3, nIs43) {
	ASSERT_EQ(computeNthFibonacciNumber3(43), 433494437);
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	cin.get();

	return 0;
}

