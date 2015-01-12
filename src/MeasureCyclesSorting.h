#include "Meter.h"

cout << "Starting cycle measurements of sorting algorithms ..." << endl;

cout << "Measuring function 'insertionsort' for sorted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertOrdered = createOrderedVector(i);
    meterSorting.measureCycles(insertionsort, vInsertOrdered, 10, "InsertionsortCyclesOrdered");
    vInsertOrdered.erase(vInsertOrdered.begin(), vInsertOrdered.begin() + vInsertOrdered.size());
}
cout << "Measuring function 'insertionsort' for reverse sorted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertReversed = createReverseOrderedVector(i);
    meterSorting.measureCycles(insertionsort, vInsertReversed, 10, "InsertionsortCyclesReversed");
    vInsertReversed.erase(vInsertReversed.begin(), vInsertReversed.begin() + vInsertReversed.size());
}
cout << "Measuring function 'insertionsort' for permuted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertPermuted = createPermutedVector(i);
    meterSorting.measureCycles(insertionsort, vInsertPermuted, 10, "InsertionsortCyclesPermuted");
    vInsertPermuted.erase(vInsertPermuted.begin(), vInsertPermuted.begin() + vInsertPermuted.size());
}
cout << "Measuring function 'insertionsort' for randomized input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertRandomized = createRandomizedVector(i, 1);
    meterSorting.measureTime(insertionsort, vInsertRandomized, 10, "InsertionsortCyclesRandomized");
    vInsertOrdered.erase(vInsertRandomized.begin(), vInsertRandomized.begin() + vInsertRandomized.size());
}
cout << "Measuring function 'insertionsort' for input with repeated elements." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertRepeated = createVectorWithRepeatedElements(i, 1);
    meterSorting.measureCycles(insertionsort, vInsertRepeated, 10, "InsertionsortCyclesRepeated");
    vInsertRepeated.erase(vInsertRepeated.begin(), vInsertRepeated.begin() + vInsertRepeated.size());
}


cout << "Measuring function 'quicksort' for sorted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickOrdered = createOrderedVector(i);
    meterSorting.measureCycles(quicksort, vQuickOrdered, 10, "QuicksortCyclesOrdered");
    vQuickOrdered.erase(vQuickOrdered.begin(), vQuickOrdered.begin() + vQuickOrdered.size());
}
cout << "Measuring function 'quicksort' for reverse sorted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickReversed = createReverseOrderedVector(i);
    meterSorting.measureCycles(quicksort, vQuickReversed, 10, "QuicksortCyclesReversed");
    vQuickReversed.erase(vQuickReversed.begin(), vQuickReversed.begin() + vQuickReversed.size());
}
cout << "Measuring function 'quicksort' for permuted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickPermuted = createPermutedVector(i);
    meterSorting.measureCycles(quicksort, vQuickPermuted, 10, "QuicksortCyclesPermuted");
    vQuickPermuted.erase(vQuickPermuted.begin(), vQuickPermuted.begin() + vQuickPermuted.size());
}
cout << "Measuring function 'quicksort' for randomized input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickRandomized = createRandomizedVector(i, 1);
    meterSorting.measureTime(insertionsort, vQuickRandomized, 10, "QuicksortCyclesRandomized");
    vQuickRandomized.erase(vQuickRandomized.begin(), vQuickRandomized.begin() + vQuickRandomized.size());
}
cout << "Measuring function 'quicksort' for input with repeated elements." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickRepeated = createVectorWithRepeatedElements(i, 1);
    meterSorting.measureCycles(quicksort, vQuickRepeated, 10, "QuicksortCyclesRepeated");
    vQuickRepeated.erase(vQuickRepeated.begin(), vQuickRepeated.begin() + vQuickRepeated.size());
}


cout << "Measuring function 'mergesort' for sorted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeOrdered = createOrderedVector(i);
    meterSorting.measureCycles(mergesort, vMergeOrdered, 10, "MergesortCyclesOrdered");
    vMergeOrdered.erase(vMergeOrdered.begin(), vMergeOrdered.begin() + vMergeOrdered.size());
}
cout << "Measuring function 'mergesort' for reverse sorted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeReversed = createReverseOrderedVector(i);
    meterSorting.measureCycles(mergesort, vMergeReversed, 10, "MergesortCyclesReversed");
    vMergeReversed.erase(vMergeReversed.begin(), vMergeReversed.begin() + vMergeReversed.size());
}
cout << "Measuring function 'mergesort' for permuted input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergePermuted = createPermutedVector(i);
    meterSorting.measureCycles(mergesort, vMergePermuted, 10, "MergesortCyclesPermuted");
    vMergePermuted.erase(vMergePermuted.begin(), vMergePermuted.begin() + vMergePermuted.size());
}
cout << "Measuring function 'mergesort' for randomized input." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeRandomized = createRandomizedVector(i, 1);
    meterSorting.measureTime(insertionsort, vMergeRandomized, 10, "MergesortCyclesRandomized");
    vMergeRandomized.erase(vMergeRandomized.begin(), vMergeRandomized.begin() + vMergeRandomized.size());
}
cout << "Measuring function 'mergesort' for input with repeated elements." << endl;
for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeRepeated = createVectorWithRepeatedElements(i, 1);
    meterSorting.measureCycles(mergesort, vMergeRepeated, 10, "MergesortCyclesRepeated");
    vMergeRepeated.erase(vMergeRepeated.begin(), vMergeRepeated.begin() + vMergeRepeated.size());
}
//delete meterSorting;
cout << "Finished measuring cycles of sorting algorithms." << endl << endl;
