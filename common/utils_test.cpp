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

TEST(UtilsTest, MaxTest) {
    std::vector<int> arr{4, 2, 5, 2, 4, 2, 5};
    auto it = Max(arr.begin(), arr.end());
    EXPECT_EQ(*it, 5);
    EXPECT_EQ(it, arr.begin() + 2);

    auto Value = [](const auto &a) { return std::abs(a - 4); };
    auto Filter = [](const auto &a) { return a <= 4; };
    it = Max(arr.begin(), arr.end(), Value);
    EXPECT_EQ(*it, 2);
    EXPECT_EQ(it, arr.begin() + 1);
    it = MaxAfterFilter(arr.begin(), arr.end(), Filter);
    EXPECT_EQ(*it, 4);
    EXPECT_EQ(it, arr.begin());
}

TEST(UtilsTest, IsIterableTest) {
    EXPECT_TRUE(is_iterable<std::vector<int>>);
    EXPECT_TRUE(bool(is_iterable<std::map<int, double>>));
    EXPECT_TRUE(is_iterable<std::string>);
    EXPECT_FALSE(is_iterable<double>);
}