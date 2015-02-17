// Test cases for function 'insertionsort' with ordered input.
TEST(SortingTest, Insertionsort_Ordered) {
	for (unsigned int i = 0; i <= 10000; i++/*i += (i/10 + 1)*/) {
        std::vector<size_t> vOrdered = createOrderedVector(i);
        insertionsort(vOrdered);
        EXPECT_EQ(isSortedAsc(vOrdered), 1);
        vOrdered.erase(vOrdered.begin(), vOrdered.begin() + vOrdered.size());
    }
}

// Test cases for function 'insertionsort' with reversely ordered input.
TEST(SortingTest, Insertionsort_Reversed) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vReversed = createReverseOrderedVector(i);
        insertionsort(vReversed);
        EXPECT_EQ(isSortedAsc(vReversed), 1);
        vReversed.erase(vReversed.begin(), vReversed.begin() + vReversed.size());
    }
}

// Test cases for function 'insertionsort' with permuted input.
TEST(SortingTest, Insertionsort_Permuted) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vPermuted = createPermutedVector(i);
        insertionsort(vPermuted);
        EXPECT_EQ(isSortedAsc(vPermuted), 1);
        vPermuted.erase(vPermuted.begin(), vPermuted.begin() + vPermuted.size());
    }
}

// Test cases for function 'insertionsort' with randomized input.
TEST(SortingTest, Insertionsort_Randomized) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vRandomized = createRandomizedVector(i, 1);
        insertionsort(vRandomized);
        EXPECT_EQ(isSortedAsc(vRandomized), 1);
        vRandomized.erase(vRandomized.begin(), vRandomized.begin() + vRandomized.size());
    }
}


// Test cases for function 'insertionsort' with input that hat repeated elements.
TEST(SortingTest, Insertionsort_Repeated) {
	for (unsigned int i = 0; i <= 10000; i += (i/10 + 1)) {
        std::vector<size_t> vRepeated = createVectorWithRepeatedElements(i, 1);
        insertionsort(vRepeated);
        EXPECT_EQ(isSortedAsc(vRepeated), 1);
        vRepeated.erase(vRepeated.begin(), vRepeated.begin() + vRepeated.size());
    }
}
