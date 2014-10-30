#include <iostream>
using namespace std;

int main() {
	cout << computeNthFibonacciNumber1(0);
	return 0;
}

int computeNthFibonacciNumber1(n) {
	if (n == 0) {
		return 0;
	}elseif(n == 1) {
		return 1;
	}
	else{
		return computeNthFibonacciNumber(n - 1) + computeNthFibonacciNumber(n - 2);
	}
}

int computeNthFibonacciNumber2(n) {

}