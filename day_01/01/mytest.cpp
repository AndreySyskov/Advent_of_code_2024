#include <gtest/gtest.h>

#include "mylib.h"

TEST(ArraySortTest, BasicSort) {
  int arr[] = {3, 4, 2, 1, 3, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  arr_sort(arr, size);
  EXPECT_EQ(arr[0], 1);
  EXPECT_EQ(arr[1], 2);
  EXPECT_EQ(arr[2], 3);
  EXPECT_EQ(arr[3], 3);
  EXPECT_EQ(arr[4], 3);
  EXPECT_EQ(arr[5], 4);

  int arr_2[] = {4, 3, 5, 3, 9, 3};

  arr_sort(arr_2, size);
  EXPECT_EQ(arr_2[0], 3);
  EXPECT_EQ(arr_2[1], 3);
  EXPECT_EQ(arr_2[2], 3);
  EXPECT_EQ(arr_2[3], 4);
  EXPECT_EQ(arr_2[4], 5);
  EXPECT_EQ(arr_2[5], 9);
}

TEST(ComparTest, BasicCompar) {
  int arr1[] = {1, 2, 3, 3, 3, 4};
  int arr2[] = {3, 3, 3, 4, 5, 9};
  int size = sizeof(arr1) / sizeof(arr1[0]);
  compar(arr1, arr2, size);
  EXPECT_EQ(arr1[0], 2);
  EXPECT_EQ(arr1[1], 1);
  EXPECT_EQ(arr1[2], 0);
  EXPECT_EQ(arr1[3], 1);
  EXPECT_EQ(arr1[4], 2);
  EXPECT_EQ(arr1[5], 5);
}

TEST(SummTest, BasicSumm) {
  int arr[] = {2, 1, 0, 1, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  EXPECT_EQ(summ(arr, size), 11);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}