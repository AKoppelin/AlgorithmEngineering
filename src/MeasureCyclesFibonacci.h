#include "Meter.h"

//Meter meterFibo = Meter();
cout << "Starting measuring cycles of Fibonacci ..." << endl;
cout << "Measuring function 'nthFibonacciNumber1'." << endl;
// for (int i = 0; i < 45; i++) {
    // meterFibo.measureCycles(computeNthFibonacciNumber1, i, 10, "nthFibonacciNumber1");
// }
cout << "Measuring function 'nthFibonacciNumber2'." << endl;
for (int i = 0; i < 94; i++) {
    meterFibo.measureCycles(computeNthFibonacciNumber2, i, 10, "nthFibonacciNumber2");
}
cout << "Measuring function 'nthFibonacciNumber3'." << endl;
for (int i = 0; i < 94; i++) {
    meterFibo.measureCycles(computeNthFibonacciNumber3, i, 10, "nthFibonacciNumber3");
}
cout << "Measuring function 'nthFibonacciNumber4'." << endl;
for (int i = 0; i < 94; i++) {
    meterFibo.measureCycles(computeNthFibonacciNumber4, i, 10, "nthFibonacciNumber4");
}
cout << "Measuring function 'nthFibonacciNumber5'." << endl;
for (int i = 0; i < 94; i++) {
    meterFibo.measureCycles(computeNthFibonacciNumber5, i, 10, "nthFibonacciNumber5");
}
cout << "Measuring function 'nthFibonacciNumber6'." << endl;
for (int i = 0; i < 94; i++) {
    meterFibo.measureCycles(computeNthFibonacciNumber6, i, 10, "nthFibonacciNumber6");
}
cout << "Measuring function 'nthFibonacciNumber7'." << endl;
for (int i = 0; i < 93; i++) {
    meterFibo.measureCycles(computeNthFibonacciNumber7, i, 10, "nthFibonacciNumber7");
}
//delete meterFibo;
cout << "Finished measuring cycles of Fibonacci." << endl << endl;
//meterFibo.~Meter();
