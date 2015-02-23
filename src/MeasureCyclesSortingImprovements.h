#include "Meter.h"
#include "SortingNoRef.h"

Meter meterSortingCyclesImpr = Meter();
cout << "Starting cycle measurements of sorting algorithms ..." << endl;

// Measure quicksort1.
cout << "Measuring function 'quicksort1' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort1Ordered", quicksort1, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'quicksort1' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort1Reversed", quicksort1, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'quicksort1' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort1Permuted", quicksort1, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'quicksort1' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort1Randomized", quicksort1, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'quicksort1' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort1Repeated", quicksort1, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}


// Measure quicksort2.
cout << "Measuring function 'quicksort2' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort2Ordered", quicksort2, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'quicksort2' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort2Reversed", quicksort2, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'quicksort2' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort2Permuted", quicksort2, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'quicksort2' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort2Randomized", quicksort2, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'quicksort2' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort2Repeated", quicksort2, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}

// Measure quicksort3 (fat partition).
cout << "Measuring function 'quicksort3' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort3Ordered", quicksort3, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'quicksort3' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort3Reversed", quicksort3, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'quicksort3' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort3Permuted", quicksort3, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'quicksort3' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort3Randomized", quicksort3, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'quicksort3' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCyclesImpr.measureCycles<void, std::vector<size_t> >(i, 10, "Quicksort3Repeated", quicksort3, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}

cout << "Finished measuring cycles of improved sorting algorithms." << endl << endl;
