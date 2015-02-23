// Test cases for function 'quicksort1' with ordered input.
TEST(SortingTest, Quicksort1_Ordered) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vOrdered = createOrderedVector(i);
        quicksort1(vOrdered);
        EXPECT_EQ(isSortedAsc(vOrdered), 1);
        vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
    }
}

// Test cases for function 'quicksort1' with reversely ordered input.
TEST(SortingTest, Quicksort1_Reversed) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vReversed = createReverseOrderedVector(i);
        quicksort1(vReversed);
        EXPECT_EQ(isSortedAsc(vReversed), 1);
        vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
    }
}

// Test cases for function 'quicksort1' with permuted input.
TEST(SortingTest, Quicksort1_Permuted) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vPermuted = createPermutedVector(i);
        quicksort1(vPermuted);
        EXPECT_EQ(isSortedAsc(vPermuted), 1);
        vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
    }
}

// Test cases for function 'quicksort1' with randomized input.
TEST(SortingTest, Quicksort1_Randomized) {
    for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
        quicksort1(vRandomized);
        EXPECT_EQ(isSortedAsc(vRandomized), 1);
        vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
    }
}


// Test cases for function 'quicksort1' with input that hat repeated elements.
TEST(SortingTest, Quicksort1_Repeated) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
        quicksort1(vRepeated);
        EXPECT_EQ(isSortedAsc(vRepeated), 1);
        vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
    }
}
