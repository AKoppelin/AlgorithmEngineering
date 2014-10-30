#include <iostream>
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

/// This function computes the n-th Fibonacci number in linear time
/// in n and needs exponential memory.
int computeNthFibonacciNumber2(int n) {
	int* arr = new int[n];	// a dynamic array size can only be initialized this way

	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
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

int main() {
	cout << "Die wievielte Fibonacci-Zahl soll berechnet werden?" << endl;
	int n;
	cin >> n;
	cout << endl;
	cout << computeNthFibonacciNumber1(n) << endl;
	cout << computeNthFibonacciNumber2(n) << endl;
	cout << computeNthFibonacciNumber3(n) << endl;
	return 0;
}

