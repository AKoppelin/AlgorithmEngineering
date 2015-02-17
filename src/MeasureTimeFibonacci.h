#include "Meter.h"

Meter meterFiboTime = Meter();
cout << "Starting time measurements of Fibonacci ..." << endl;
cout << "Measuring function 'nthFibonacciNumber1'." << endl;
for (unsigned int i = 0; i < 45; i++) {
	meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber1", computeNthFibonacciNumber1, i);
}
cout << "Measuring function 'nthFibonacciNumber2'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber2", computeNthFibonacciNumber2, i);
}
cout << "Measuring function 'nthFibonacciNumber3'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber3", computeNthFibonacciNumber3, i);
}
cout << "Measuring function 'nthFibonacciNumber4'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber4", computeNthFibonacciNumber4, i);
}
cout << "Measuring function 'nthFibonacciNumber5'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber5", computeNthFibonacciNumber5, i);
}
cout << "Measuring function 'nthFibonacciNumber6'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber6", computeNthFibonacciNumber6, i);
}
cout << "Measuring function 'nthFibonacciNumber7'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboTime.measureTime<uint64_t, unsigned int>(i, 10, "nthFibonacciNumber7", computeNthFibonacciNumber7, i);
}
cout << "Finished time measurements of Fibonacci." << endl << endl;
