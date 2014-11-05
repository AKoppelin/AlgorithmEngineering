#include "gtest/gtest.h"

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

