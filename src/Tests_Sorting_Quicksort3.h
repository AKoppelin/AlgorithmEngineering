// Test cases for function 'quicksort3' with ordered input.
TEST(SortingTest, Quicksort3_Ordered) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vOrdered = createOrderedVector(i);
        quicksort3(vOrdered);
        EXPECT_EQ(isSortedAsc(vOrdered), 1);
        vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
    }
}

// Test cases for function 'quicksort3' with reversely ordered input.
TEST(SortingTest, Quicksort3_Reversed) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vReversed = createReverseOrderedVector(i);
        quicksort3(vReversed);
        EXPECT_EQ(isSortedAsc(vReversed), 1);
        vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
    }
}

// Test cases for function 'quicksort3' with permuted input.
TEST(SortingTest, Quicksort3_Permuted) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vPermuted = createPermutedVector(i);
        quicksort3(vPermuted);
        EXPECT_EQ(isSortedAsc(vPermuted), 1);
        vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
    }
}

// Test cases for function 'quicksort3' with randomized input.
TEST(SortingTest, Quicksort3_Randomized) {
    for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
        quicksort3(vRandomized);
        EXPECT_EQ(isSortedAsc(vRandomized), 1);
        vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
    }
}


// Test cases for function 'quicksort3' with input that hat repeated elements.
TEST(SortingTest, Quicksort3_Repeated) {
	for (unsigned int i = 0; i <= 100000; i += (i/10 + 1)) {
        std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
        quicksort3(vRepeated);
        EXPECT_EQ(isSortedAsc(vRepeated), 1);
        vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
    }
}
