// Test cases for function computeNthFibonacciNumber1()
TEST(FibonacciTest, computeNthFibonacciNumber1) {
	ASSERT_EQ(computeNthFibonacciNumber1(0), 0);
	ASSERT_EQ(computeNthFibonacciNumber1(1), 1);
	ASSERT_EQ(computeNthFibonacciNumber1(2), 1);
	ASSERT_EQ(computeNthFibonacciNumber1(3), 2);
	ASSERT_EQ(computeNthFibonacciNumber1(4), 3);
	ASSERT_EQ(computeNthFibonacciNumber1(5), 5);
	ASSERT_EQ(computeNthFibonacciNumber1(6), 8);
}

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

// Test cases for function 'computeNthFibonacciNumber4'.
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

// Test cases for function 'computeNthFibonacciNumber5'.
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

// Test cases for function 'computeNthFibonacciNumber6'.
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

// Test cases for function 'computeNthFibonacciNumber6'.
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
