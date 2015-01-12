#include "Meter.h"
#include "Sorting.h"
//Sorting s;
Meter meterSorting = Meter();
cout << "Starting time measurements of sorting algorithms ..." << endl;
cout << "Measuring function 'insertionsort' for sorted input." << endl;

template void insertionsort<size_t>(std::vector<size_t>&);

for (int i = 0; i <= 100000; i += (i/10 + 1)) {
    std::vector<size_t> vInsertOrdered = createOrderedVector(i);

    meterSorting.measureTime(insertionsort, vInsertOrdered, 10, "InsertionsortTimeOrdered");
    vInsertOrdered.erase(vInsertOrdered.begin(), vInsertOrdered.begin() + vInsertOrdered.size());
}
//cout << "Measuring function 'insertionsort' for reverse sorted input." << endl;
//for (int i = 0; i <= 10000; i += (i/10 + 1)) {
//    std::vector<size_t> vInsertReversed = createReverseOrderedVector(i);
//    meterSorting.measureTime(insertionsort, vInsertReversed, 10, "InsertionsortTimeReversed");
//    vInsertReversed.erase(vInsertReversed.begin(), vInsertReversed.begin() + vInsertReversed.size());
//}
//cout << "Measuring function 'insertionsort' for permuted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vInsertPermuted = createPermutedVector(i);
//    meterSorting.measureTime(insertionsort, vInsertPermuted, 10, "InsertionsortTimePermuted");
//    vInsertPermuted.erase(vInsertPermuted.begin(), vInsertPermuted.begin() + vInsertPermuted.size());
//}
//cout << "Measuring function 'insertionsort' for randomized input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vInsertRandomized = createRandomizedVector(i, 1);
//    meterSorting.measureTime(insertionsort, vInsertRandomized, 10, "InsertionsortTimeRandomized");
//    vInsertRandomized.erase(vInsertRandomized.begin(), vInsertRandomized.begin() + vInsertRandomized.size());
//}
//cout << "Measuring function 'insertionsort' for input with repeated elements." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vInsertRepeated = createVectorWithRepeatedElements(i, 1);
//    meterSorting.measureTime(insertionsort, vInsertRepeated, 10, "InsertionsortTimeRepeated");
//    vInsertRepeated.erase(vInsertRepeated.begin(), vInsertRepeated.begin() + vInsertRepeated.size());
//}
//cout << "Measuring function 'quicksort' for sorted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vQuickOrdered = createOrderedVector(i);
//    meterSorting.measureTime(quicksort, vQuickOrdered, 10, "QuicksortTimeOrdered");
//    vQuickOrdered.erase(vQuickOrdered.begin(), vQuickOrdered.begin() + vQuickOrdered.size());
//}
//cout << "Measuring function 'quicksort' for reverse sorted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vQuickReversed = createReverseOrderedVector(i);
//    meterSorting.measureTime(quicksort, vQuickReversed, 10, "QuicksortTimeReversed");
//    vQuickReversed.erase(vQuickReversed.begin(), vQuickReversed.begin() + vQuickReversed.size());;
//}
//cout << "Measuring function 'quicksort' for permuted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vQuickPermuted = createPermutedVector(i);
//    meterSorting.measureTime(quicksort, vQuickPermuted, 10, "QuicksortTimePermuted");
//    vQuickPermuted.erase(vQuickPermuted.begin(), vQuickPermuted.begin() + vQuickPermuted.size());
//}
//cout << "Measuring function 'quicksort' for randomized input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vQuickRandomized = createRandomizedVector(i, 1);
//    meterSorting.measureTime(insertionsort, vQuickRandomized, 10, "QuicksortTimeRandomized");
//    vQuickRandomized.erase(vQuickRandomized.begin(), vQuickRandomized.begin() + vQuickRandomized.size());
//}
//cout << "Measuring function 'quicksort' for input with repeated elements." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vQuickRepeated = createVectorWithRepeatedElements(i, 1);
//    meterSorting.measureTime(quicksort, vQuickRepeated, 10, "QuicksortTimeRepeated");
//    vQuickRepeated.erase(vQuickRepeated.begin(), vQuickRepeated.begin() + vQuickRepeated.size());
//}
//cout << "Measuring function 'mergesort' for sorted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vMergeOrdered = createOrderedVector(i);
//    meterSorting.measureTime(mergesort, vMergeOrdered, 10, "MergesortTimeOrdered");
//    vMergeOrdered.erase(vMergeOrdered.begin(), vMergeOrdered.begin() + vMergeOrdered.size());
//}
//cout << "Measuring function 'mergesort' for reverse sorted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vMergeReversed = createReverseOrderedVector(i);
//    meterSorting.measureTime(mergesort, vMergeReversed, 10, "MergesortTimeReversed");
//    vMergeReversed.erase(vMergeReversed.begin(), vMergeReversed.begin() + vMergeReversed.size());
//}
//cout << "Measuring function 'mergesort' for permuted input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vMergePermuted = createPermutedVector(i);
//    meterSorting.measureTime(mergesort, vMergePermuted, 10, "MergesortTimePermuted");
//    vMergePermuted.erase(vMergePermuted.begin(), vMergePermuted.begin() + vMergePermuted.size());
//}
//cout << "Measuring function 'mergesort' for randomized input." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vMergeRandomized = createRandomizedVector(i, 1);
//    meterSorting.measureTime(insertionsort, vMergeRandomized, 10, "MergesortTimeRandomized");
//    vMergeRandomized.erase(vMergeRandomized.begin(), vMergeRandomized.begin() + vMergeRandomized.size());
//}
//cout << "Measuring function 'mergesort' for input with repeated elements." << endl;
//for (int i = 0; i <= 100000; i += (i/10 + 1)) {
//    std::vector<size_t> vMergeRepeated = createVectorWithRepeatedElements(i, 1);
//    meterSorting.measureTime(mergesort, vMergeRepeated, 10, "MergesortTimeRepeated");
//    vMergeRepeated.erase(vMergeRepeated.begin(), vMergeRepeated.begin() + vMergeRepeated.size());
//}
cout << "Finished time measurements of sorting algorithms." << endl << endl;
