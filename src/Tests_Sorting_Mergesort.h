// Test cases for function 'mergesort' with ordered input.
TEST(SortingTest, Mergesort_Ordered) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vOrdered = createOrderedVector(i);
        mergesort(vOrdered);
        EXPECT_EQ(isSortedAsc(vOrdered), 1);
        vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
    }
}

// Test cases for function 'mergesort' with reversely ordered input.
TEST(SortingTest, Mergesort_Reversed) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vReversed = createReverseOrderedVector(i);
        mergesort(vReversed);
        EXPECT_EQ(isSortedAsc(vReversed), 1);
        vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
    }
}

// Test cases for function 'mergesort' with permuted input.
TEST(SortingTest, Mergesort_Permuted) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vPermuted = createPermutedVector(i);
        mergesort(vPermuted);
        EXPECT_EQ(isSortedAsc(vPermuted), 1);
        vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
    }
}

// Test cases for function 'mergesort' with randomized input.
TEST(SortingTest, Mergesort_Randomized) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
        mergesort(vRandomized);
        EXPECT_EQ(isSortedAsc(vRandomized), 1);
        vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
    }
}


// Test cases for function 'mergesort' with input that hat repeated elements.
TEST(SortingTest, Mergesort_Repeated) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
        mergesort(vRepeated);
        EXPECT_EQ(isSortedAsc(vRepeated), 1);
        vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
    }
}
