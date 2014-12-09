//#include "Fibonacci.h"
#ifdef RUN_TESTS
#include "gtest/gtest.h"
#endif // RUN_TESTS

#ifdef RUN_TESTS
// Test cases for function 'computeNthFibonacciNumber1'.
TEST(FibonacciTest, computeNthFibonacciNumber1) {
	ASSERT_EQ(f.computeNthFibonacciNumber1(0), 0);
	ASSERT_EQ(f.computeNthFibonacciNumber1(1), 1);
	ASSERT_EQ(f.computeNthFibonacciNumber1(2), 1);
	ASSERT_EQ(f.computeNthFibonacciNumber1(3), 2);
	ASSERT_EQ(f.computeNthFibonacciNumber1(4), 3);
	ASSERT_EQ(f.computeNthFibonacciNumber1(5), 5);
	ASSERT_EQ(f.computeNthFibonacciNumber1(6), 8);
}
#endif // RUN_TESTS

#ifdef RUN_TESTS
// Test cases for function 'computeNthFibonacciNumber2'.
TEST(FibonacciTest, computeNthFibonacciNumber2) {
	ASSERT_EQ(f.computeNthFibonacciNumber2(0), f.computeNthFibonacciNumber1(0));
	ASSERT_EQ(f.computeNthFibonacciNumber2(1), f.computeNthFibonacciNumber1(1));
	ASSERT_EQ(f.computeNthFibonacciNumber2(2), f.computeNthFibonacciNumber1(2));
	ASSERT_EQ(f.computeNthFibonacciNumber2(3), f.computeNthFibonacciNumber1(3));
	ASSERT_EQ(f.computeNthFibonacciNumber2(4), f.computeNthFibonacciNumber1(4));
	ASSERT_EQ(f.computeNthFibonacciNumber2(5), f.computeNthFibonacciNumber1(5));
	ASSERT_EQ(f.computeNthFibonacciNumber2(6), f.computeNthFibonacciNumber1(6));
	ASSERT_EQ(f.computeNthFibonacciNumber2(30), f.computeNthFibonacciNumber1(30));
	ASSERT_EQ(f.computeNthFibonacciNumber2(43), 433494437);
}
#endif // RUN_TESTS

#ifdef RUN_TESTS
// Test cases for function 'computeNthFibonacciNumber3'.
TEST(FibonacciTest, computeNthFibonacciNumber3) {
	ASSERT_EQ(f.computeNthFibonacciNumber3(1), f.computeNthFibonacciNumber1(1));
	ASSERT_EQ(f.computeNthFibonacciNumber3(2), f.computeNthFibonacciNumber1(2));
	ASSERT_EQ(f.computeNthFibonacciNumber3(3), f.computeNthFibonacciNumber1(3));
	ASSERT_EQ(f.computeNthFibonacciNumber3(4), f.computeNthFibonacciNumber1(4));
	ASSERT_EQ(f.computeNthFibonacciNumber3(5), f.computeNthFibonacciNumber1(5));
	ASSERT_EQ(f.computeNthFibonacciNumber3(6), f.computeNthFibonacciNumber1(6));
	ASSERT_EQ(f.computeNthFibonacciNumber3(30), f.computeNthFibonacciNumber1(30));
	ASSERT_EQ(f.computeNthFibonacciNumber3(43), 433494437);
}
#endif // RUN_TESTS

#ifdef RUN_TESTS
/// 
TEST(FibonacciTest, computeNthFibonacciNumber5) {
	ASSERT_EQ(f.computeNthFibonacciNumber5(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(f.computeNthFibonacciNumber5(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(f.computeNthFibonacciNumber5(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(f.computeNthFibonacciNumber5(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(f.computeNthFibonacciNumber5(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(f.computeNthFibonacciNumber5(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(f.computeNthFibonacciNumber5(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(f.computeNthFibonacciNumber5(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(f.computeNthFibonacciNumber5(43), 433494437);
}
#endif // RUN_TESTS

#ifdef RUN_TESTS
TEST(FibonacciTest, computeNthFibonacciNumber6) {
	ASSERT_EQ(f.computeNthFibonacciNumber6(0), computeNthFibonacciNumber1(0));
	ASSERT_EQ(f.computeNthFibonacciNumber6(1), computeNthFibonacciNumber1(1));
	ASSERT_EQ(f.computeNthFibonacciNumber6(2), computeNthFibonacciNumber1(2));
	ASSERT_EQ(f.computeNthFibonacciNumber6(3), computeNthFibonacciNumber1(3));
	ASSERT_EQ(f.computeNthFibonacciNumber6(4), computeNthFibonacciNumber1(4));
	ASSERT_EQ(f.computeNthFibonacciNumber6(5), computeNthFibonacciNumber1(5));
	ASSERT_EQ(f.computeNthFibonacciNumber6(6), computeNthFibonacciNumber1(6));
	ASSERT_EQ(f.computeNthFibonacciNumber6(30), computeNthFibonacciNumber1(30));
	ASSERT_EQ(f.computeNthFibonacciNumber6(43), 433494437);
}
#endif // RUN_TESTS
