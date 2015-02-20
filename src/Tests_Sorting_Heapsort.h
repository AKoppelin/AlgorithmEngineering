// Test cases for function 'insertionsort' with ordered input.
TEST(SortingTest, isHeap) {
    std::vector<size_t> emptyHeap;
    EXPECT_EQ(isBinaryMinHeap(emptyHeap, emptyHeap.size()), 1);

    std::vector<size_t> v;
    v.push_back(1);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 1);
    v.push_back(2);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 1);
    v.pop_back();
    v.push_back(1);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 1);
    v.pop_back();
    v.pop_back();
    v.push_back(2);
    v.push_back(1);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 0);
}

TEST(SortingTest, siftUp) {
    std::vector<size_t> v;
    v.push_back(1);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 1);
    v.push_back(2);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 1);
    v.pop_back();
    v.push_back(1);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 1);
    v.pop_back();
    v.pop_back();
    v.push_back(2);
    v.push_back(1);
    EXPECT_EQ(isBinaryMinHeap(v, v.size()), 0);
}
