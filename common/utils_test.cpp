//
// Created by ziwei on 2023/5/14.
//

#include "gtest/gtest.h"

#include "utils.h"

TEST(UtilsTest, BinarySearchTest) {
    std::vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9};
    auto it = BinarySearch(arr, 3);
    EXPECT_EQ(it, arr.cbegin() + 2);
    it = BinarySearch(arr, 5);
    EXPECT_EQ(it, arr.cbegin() + 3);
}