#include "Meter.h"
#include "Sorting.h"

Meter meterSortingCycles = Meter();
cout << "Starting cycle measurements of sorting algorithms ..." << endl;

// Measure insertionsort.
cout << "Measuring function 'insertionsort' for sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertOrdered = createOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(insertionsort, vInsertOrdered, i, 10, "InsertionsortCyclesOrdered");
    vInsertOrdered.erase(vInsertOrdered.begin(), vInsertOrdered.begin() + vInsertOrdered.size());
}
cout << "Measuring function 'insertionsort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertReversed = createReverseOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(insertionsort, vInsertReversed, i, 10, "InsertionsortCyclesReversed");
    vInsertReversed.erase(vInsertReversed.begin(), vInsertReversed.begin() + vInsertReversed.size());
}
cout << "Measuring function 'insertionsort' for permuted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertPermuted = createPermutedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(insertionsort, vInsertPermuted, i, 10, "InsertionsortCyclesPermuted");
    vInsertPermuted.erase(vInsertPermuted.begin(), vInsertPermuted.begin() + vInsertPermuted.size());
}
cout << "Measuring function 'insertionsort' for randomized input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertRandomized = createRandomizedVector(i, 1);
    meterSortingCycles.measureTime<void, std::vector<size_t>& >(insertionsort, vInsertRandomized, i, 10, "InsertionsortCyclesRandomized");
    vInsertRandomized.erase(vInsertRandomized.begin(), vInsertRandomized.begin() + vInsertRandomized.size());
}
cout << "Measuring function 'insertionsort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(insertionsort, vInsertRepeated, i, 10, "InsertionsortCyclesRepeated");
    vInsertRepeated.erase(vInsertRepeated.begin(), vInsertRepeated.begin() + vInsertRepeated.size());
}

// Measure quicksort.
cout << "Measuring function 'quicksort' for sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickOrdered = createOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(quicksort, vQuickOrdered, i, 10, "QuicksortCyclesOrdered");
    vQuickOrdered.erase(vQuickOrdered.begin(), vQuickOrdered.begin() + vQuickOrdered.size());
}
cout << "Measuring function 'quicksort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickReversed = createReverseOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(quicksort, vQuickReversed, i, 10, "QuicksortCyclesReversed");
    vQuickReversed.erase(vQuickReversed.begin(), vQuickReversed.begin() + vQuickReversed.size());
}
cout << "Measuring function 'quicksort' for permuted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickPermuted = createPermutedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(quicksort, vQuickPermuted, i, 10, "QuicksortCyclesPermuted");
    vQuickPermuted.erase(vQuickPermuted.begin(), vQuickPermuted.begin() + vQuickPermuted.size());
}
cout << "Measuring function 'quicksort' for randomized input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickRandomized = createRandomizedVector(i, 1);
    meterSortingCycles.measureTime<void, std::vector<size_t>& >(insertionsort, vQuickRandomized, i, 10, "QuicksortCyclesRandomized");
    vQuickRandomized.erase(vQuickRandomized.begin(), vQuickRandomized.begin() + vQuickRandomized.size());
}
cout << "Measuring function 'quicksort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(quicksort, vQuickRepeated, i, 10, "QuicksortCyclesRepeated");
    vQuickRepeated.erase(vQuickRepeated.begin(), vQuickRepeated.begin() + vQuickRepeated.size());
}

// Measure mergersort.
cout << "Measuring function 'mergesort' for sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeOrdered = createOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(mergesort, vMergeOrdered, i, 10, "MergesortCyclesOrdered");
    vMergeOrdered.erase(vMergeOrdered.begin(), vMergeOrdered.begin() + vMergeOrdered.size());
}
cout << "Measuring function 'mergesort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeReversed = createReverseOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(mergesort, vMergeReversed, i, 10, "MergesortCyclesReversed");
    vMergeReversed.erase(vMergeReversed.begin(), vMergeReversed.begin() + vMergeReversed.size());
}
cout << "Measuring function 'mergesort' for permuted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergePermuted = createPermutedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(mergesort, vMergePermuted, i, 10, "MergesortCyclesPermuted");
    vMergePermuted.erase(vMergePermuted.begin(), vMergePermuted.begin() + vMergePermuted.size());
}
cout << "Measuring function 'mergesort' for randomized input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeRandomized = createRandomizedVector(i, 1);
    meterSortingCycles.measureTime<void, std::vector<size_t>& >(insertionsort, vMergeRandomized, i, 10, "MergesortCyclesRandomized");
    vMergeRandomized.erase(vMergeRandomized.begin(), vMergeRandomized.begin() + vMergeRandomized.size());
}
cout << "Measuring function 'mergesort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t>& >(mergesort, vMergeRepeated, i, 10, "MergesortCyclesRepeated");
    vMergeRepeated.erase(vMergeRepeated.begin(), vMergeRepeated.begin() + vMergeRepeated.size());
}
cout << "Finished measuring cycles of sorting algorithms." << endl << endl;
