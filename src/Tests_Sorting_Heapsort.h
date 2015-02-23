// Test cases for function 'insertionsort' with ordered input.
TEST(SortingTest, isMinHeap) {
    std::vector<size_t> emptyHeap;
    EXPECT_EQ(isBinaryHeap(emptyHeap, 0, emptyHeap.size(), isLesser<size_t>), 1);

    std::vector<size_t> v;
    v.push_back(1); // v = {1}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isLesser<size_t>), 1);
    v.push_back(2); // v = {1, 2}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isLesser<size_t>), 1);
    v.pop_back();
    v.push_back(1); // v = {1, 1}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isLesser<size_t>), 1);
    v.pop_back();
    v.pop_back();
    v.push_back(2);
    v.push_back(1); // v = {2, 1}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isLesser<size_t>), 0);
}

TEST(SortingTest, isMaxHeap) {
    std::vector<size_t> emptyHeap;
    EXPECT_EQ(isBinaryHeap(emptyHeap, 0, emptyHeap.size(), isGreater<size_t>), 1);

    std::vector<size_t> v;
    v.push_back(2); // v = {2}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isGreater<size_t>), 1);
    v.push_back(1); // v = {2, 1}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isGreater<size_t>), 1);
    v.pop_back();
    v.push_back(2); // v = {2, 2}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isGreater<size_t>), 1);
    v.pop_back();
    v.pop_back();
    v.push_back(2);
    v.push_back(3); // v = {2, 3}
    EXPECT_EQ(isBinaryHeap(v, 0, v.size(), isGreater<size_t>), 0);
}

// TODO: implement a better method for asserting
TEST(SortingTest, siftDownMin) {
    std::vector<size_t> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    siftDown(v, 0, v.size(), isLesser<size_t>);
    EXPECT_EQ(v[0], 1);
    EXPECT_EQ(v[1],  5);
    EXPECT_EQ(v[2],  2);
    while(v.size() > 0)
        v.pop_back();
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);
    siftDown(v, 0, v.size(), isLesser<size_t>);
    EXPECT_EQ(v[0],  1);
    EXPECT_EQ(v[1],  2);
    EXPECT_EQ(v[2],  5);
    while(v.size() > 0)
        v.pop_back();
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    siftDown(v, 0, v.size(), isLesser<size_t>);
    EXPECT_EQ(v[0],  2);
    EXPECT_EQ(v[1],  2);
    EXPECT_EQ(v[2],  2);
    while(v.size() > 0)
        v.pop_back();
}


TEST(SortingTest, siftDownMax) {
    std::vector<size_t> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    siftDown(v, 0, v.size(), isGreater<size_t>);
    EXPECT_EQ(v[0],  5);
    EXPECT_EQ(v[1],  2);
    EXPECT_EQ(v[2],  1);
    while(v.size() > 0)
        v.pop_back();
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    siftDown(v, 0, v.size(), isGreater<size_t>);
    EXPECT_EQ(v[0],  5);
    EXPECT_EQ(v[1],  1);
    EXPECT_EQ(v[2],  2);
    while(v.size() > 0)
        v.pop_back();
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    siftDown(v, 0, v.size(), isGreater<size_t>);
    EXPECT_EQ(v[0],  2);
    EXPECT_EQ(v[1],  2);
    EXPECT_EQ(v[2],  2);
    while(v.size() > 0)
        v.pop_back();
}

// Test cases for function 'heapsort' with ordered input.
TEST(SortingTest, Heapsort_Ordered) {
	for (unsigned int i = 0; i <= 10000; i++) {
        std::vector<size_t> vOrdered = createOrderedVector(i);
        heapsortAsc(vOrdered);
        EXPECT_EQ(isSortedAsc(vOrdered), 1);
        vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
    }
}

// Test cases for function 'heapsort' with reversely ordered input.
TEST(SortingTest, Heapsort_Reversed) {
	for (unsigned int i = 0; i <= 10000; i++) {
        std::vector<size_t> vReversed = createReverseOrderedVector(i);
        heapsortAsc(vReversed);
        EXPECT_EQ(isSortedAsc(vReversed), 1);
        vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
    }
}

// Test cases for function 'heapsort' with permuted input.
TEST(SortingTest, Heapsort_Permuted) {
	for (unsigned int i = 0; i <= 10000; i++) {
        std::vector<size_t> vPermuted = createPermutedVector(i);
        heapsortAsc(vPermuted);
        EXPECT_EQ(isSortedAsc(vPermuted), 1);
        vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
    }
}

// Test cases for function 'heapsort' with randomized input.
TEST(SortingTest, Heapsort_Randomized) {
	for (unsigned int i = 0; i <= 10000; i++) {
        std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
        heapsortAsc(vRandomized);
        EXPECT_EQ(isSortedAsc(vRandomized), 1);
        vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
    }
}


// Test cases for function 'heapsort' with input that hat repeated elements.
TEST(SortingTest, Heapsort_Repeated) {
	for (unsigned int i = 0; i <= 10000; i++) {
        std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
        heapsortAsc(vRepeated);
        EXPECT_EQ(isSortedAsc(vRepeated), 1);
        vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
    }
}
