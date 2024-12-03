#include <gtest/gtest.h>
#include "mylib.h"

TEST (Increase_Decrease_Test, Basic) {
    int arr[] = {2, 1, 1, 0, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_increase_decrease(arr, size), false);

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_increase_decrease(arr, size), true);

    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_increase_decrease(arr, size), true);

    int arr[] = {1, 2, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_increase_decrease(arr, size), true);
}

TEST (DiffTest, Basic){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_diff_of_elements(arr, size), true);

    int arr[] = {1, 2, 3, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_diff_of_elements(arr, size), false);
}




int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}