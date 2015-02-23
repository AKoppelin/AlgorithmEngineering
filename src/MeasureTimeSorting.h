#include "Meter.h"
#include "SortingNoRef.h"


Meter meterSortingTime = Meter();
cout << "Starting time measurements of sorting algorithms ..." << endl;

// Measure insertionsort.
cout << "Measuring function 'insertionsort' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "InsertionsortOrdered", insertionsort, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'insertionsort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "InsertionsortReversed", insertionsort, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'insertionsort' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "InsertionsortPermuted", insertionsort, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'insertionsort' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "InsertionsortRandomized", insertionsort, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'insertionsort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "InsertionsortRepeated", insertionsort, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}

// Measure quicksort.
cout << "Measuring function 'quicksort' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "QuicksortOrdered", quicksort, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'quicksort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "QuicksortReversed", quicksort, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());;
}
cout << "Measuring function 'quicksort' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "QuicksortPermuted", quicksort, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'quicksort' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "QuicksortRandomized", quicksort, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'quicksort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "QuicksortRepeated", quicksort, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}

// Measure mergesort.
cout << "Measuring function 'mergesort' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "MergesortOrdered", mergesort, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'mergesort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "MergesortReversed", mergesort, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'mergesort' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "MergesortPermuted", mergesort, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'mergesort' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "MergesortRandomized", mergesort, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'mergesort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "MergesortRepeated", mergesort, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}

// Measure heapsort (ascending sorting).
cout << "Measuring function 'heapsort' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "HeapsortOrdered", heapsortAsc, vOrdered);
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'heapsort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "HeapsortReversed", heapsortAsc, vReversed);
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'heapsort' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "HeapsortPermuted", heapsortAsc, vPermuted);
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'heapsort' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "HeapsortRandomized", heapsortAsc, vRandomized);
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'heapsort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t> >(i, 10, "HeapsortRepeated", heapsortAsc, vRepeated);
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}

// Measure C++'s std::sort algorithm
cout << "Measuring function 'std::sort' for sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vOrdered = createOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t>::iterator, std::vector<size_t>::iterator >(i, 10, "StdSortOrdered", sort, vOrdered.begin(), vOrdered.end());
    vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
}
cout << "Measuring function 'std::sort' for reverse sorted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vReversed = createReverseOrderedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t>::iterator, std::vector<size_t>::iterator >(i, 10, "StdSortReversed", std::sort, vReversed.begin(), vReversed.end());
    vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
}
cout << "Measuring function 'std::sort' for permuted input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vPermuted = createPermutedVector(i);
    meterSortingTime.measureTime<void, std::vector<size_t>::iterator, std::vector<size_t>::iterator >(i, 10, "StdSortPermuted", std::sort, vPermuted.begin(), vPermuted.end());
    vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
}
cout << "Measuring function 'std::sort' for randomized input." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t>::iterator, std::vector<size_t>::iterator >(i, 10, "StdSortRandomized", std::sort, vRandomized.begin(), vRandomized.end());
    vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
}
cout << "Measuring function 'std::sort' for input with repeated elements." << endl;
for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
    std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
    meterSortingTime.measureTime<void, std::vector<size_t>::iterator, std::vector<size_t>::iterator >(i, 10, "StdSortRepeated", std::sort, vRepeated.begin(), vRepeated.end());
    vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
}
cout << "Finished time measurements of sorting algorithms." << endl << endl;
