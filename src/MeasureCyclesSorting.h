#include "Meter.h"
#include "SortingNoRef.h"

Meter meterSortingCycles = Meter();
cout << "Starting cycle measurements of sorting algorithms ..." << endl;

// Measure insertionsort.
cout << "Measuring function 'insertionsort' for sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertOrdered = createOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "InsertionsortOrdered", insertionsort, vInsertOrdered);
    vInsertOrdered.erase(vInsertOrdered.begin(), vInsertOrdered.begin() + vInsertOrdered.size());
}
cout << "Measuring function 'insertionsort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertReversed = createReverseOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "InsertionsortReversed", insertionsort, vInsertReversed);
    vInsertReversed.erase(vInsertReversed.begin(), vInsertReversed.begin() + vInsertReversed.size());
}
cout << "Measuring function 'insertionsort' for permuted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertPermuted = createPermutedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "InsertionsortPermuted", insertionsort, vInsertPermuted);
    vInsertPermuted.erase(vInsertPermuted.begin(), vInsertPermuted.begin() + vInsertPermuted.size());
}
cout << "Measuring function 'insertionsort' for randomized input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertRandomized = createRandomizedVector(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "InsertionsortRandomized", insertionsort, vInsertRandomized);
    vInsertRandomized.erase(vInsertRandomized.begin(), vInsertRandomized.begin() + vInsertRandomized.size());
}
cout << "Measuring function 'insertionsort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "InsertionsortRepeated", insertionsort, vInsertRepeated);
    vInsertRepeated.erase(vInsertRepeated.begin(), vInsertRepeated.begin() + vInsertRepeated.size());
}

// Measure quicksort.
cout << "Measuring function 'quicksort' for sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickOrdered = createOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "QuicksortOrdered", quicksort, vQuickOrdered);
    vQuickOrdered.erase(vQuickOrdered.begin(), vQuickOrdered.begin() + vQuickOrdered.size());
}
cout << "Measuring function 'quicksort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickReversed = createReverseOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "QuicksortReversed", quicksort, vQuickReversed);
    vQuickReversed.erase(vQuickReversed.begin(), vQuickReversed.begin() + vQuickReversed.size());
}
cout << "Measuring function 'quicksort' for permuted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickPermuted = createPermutedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "QuicksortPermuted", quicksort, vQuickPermuted);
    vQuickPermuted.erase(vQuickPermuted.begin(), vQuickPermuted.begin() + vQuickPermuted.size());
}
cout << "Measuring function 'quicksort' for randomized input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickRandomized = createRandomizedVector(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "QuicksortRandomized", quicksort, vQuickRandomized);
    vQuickRandomized.erase(vQuickRandomized.begin(), vQuickRandomized.begin() + vQuickRandomized.size());
}
cout << "Measuring function 'quicksort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vQuickRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "QuicksortRepeated", quicksort, vQuickRepeated);
    vQuickRepeated.erase(vQuickRepeated.begin(), vQuickRepeated.begin() + vQuickRepeated.size());
}

// Measure mergersort.
cout << "Measuring function 'mergesort' for sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeOrdered = createOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "MergesortOrdered", mergesort, vMergeOrdered);
    vMergeOrdered.erase(vMergeOrdered.begin(), vMergeOrdered.begin() + vMergeOrdered.size());
}
cout << "Measuring function 'mergesort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeReversed = createReverseOrderedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "MergesortReversed", mergesort, vMergeReversed);
    vMergeReversed.erase(vMergeReversed.begin(), vMergeReversed.begin() + vMergeReversed.size());
}
cout << "Measuring function 'mergesort' for permuted input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergePermuted = createPermutedVector(i);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "MergesortPermuted", mergesort, vMergePermuted);
    vMergePermuted.erase(vMergePermuted.begin(), vMergePermuted.begin() + vMergePermuted.size());
}
cout << "Measuring function 'mergesort' for randomized input." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeRandomized = createRandomizedVector(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "MergesortRandomized", mergesort, vMergeRandomized);
    vMergeRandomized.erase(vMergeRandomized.begin(), vMergeRandomized.begin() + vMergeRandomized.size());
}
cout << "Measuring function 'mergesort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vMergeRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingCycles.measureCycles<void, std::vector<size_t> >(i, 10, "MergesortRepeated", mergesort, vMergeRepeated);
    vMergeRepeated.erase(vMergeRepeated.begin(), vMergeRepeated.begin() + vMergeRepeated.size());
}
cout << "Finished measuring cycles of sorting algorithms." << endl << endl;
