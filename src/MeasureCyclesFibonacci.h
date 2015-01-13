#include "Meter.h"

Meter meterFiboCycles = Meter();
cout << "Starting measuring cycles of Fibonacci ..." << endl;
cout << "Measuring function 'nthFibonacciNumber1'." << endl;
 for (unsigned int i = 0; i < 45; i++) {
     meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber1, i, i, 10, "nthFibonacciNumber1");
 }
cout << "Measuring function 'nthFibonacciNumber2'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber2, i, i, 10, "nthFibonacciNumber2");
}
cout << "Measuring function 'nthFibonacciNumber3'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber3, i, i, 10, "nthFibonacciNumber3");
}
cout << "Measuring function 'nthFibonacciNumber4'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber4, i, i, 10, "nthFibonacciNumber4");
}
cout << "Measuring function 'nthFibonacciNumber5'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber5, i, i, 10, "nthFibonacciNumber5");
}
cout << "Measuring function 'nthFibonacciNumber6'." << endl;
for (unsigned int i = 0; i < 94; i++) {
    meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber6, i, i, 10, "nthFibonacciNumber6");
}
cout << "Measuring function 'nthFibonacciNumber7'." << endl;
for (unsigned int i = 0; i < 93; i++) {
    meterFiboCycles.measureCycles<uint64_t, unsigned int>(computeNthFibonacciNumber7, i, i, 10, "nthFibonacciNumber7");
}

cout << "Finished measuring cycles of Fibonacci." << endl << endl;
