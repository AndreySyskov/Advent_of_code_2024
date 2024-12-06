#include <gtest/gtest.h>
#include "mylib.h"

TEST (Increase_Decrease_Test, Basic) {
    int arr1[] = {2, 1, 1, 0, 2, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(test_increase_decrease(arr1, size), false);

    int arr2[] = {1, 2, 3, 4, 5, 6};
    //int size = sizeof(arr2) / sizeof(arr2[0]);
    EXPECT_EQ(test_increase_decrease(arr2, size), true);

    int arr3[] = {6, 5, 4, 3, 2, 1};
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(test_increase_decrease(arr3, size), true);

    int arr4[] = {1, 2, 2, 4, 5, 6};
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(test_increase_decrease(arr4, size), true);
}

TEST (Increase_Decrease_Test, Basic_2) {
    int arr1[] = {7, 6, 4, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(test_increase_decrease(arr1, size), true);

    int arr2[] = {1, 2, 7, 8, 9};
    //int size = sizeof(arr2) / sizeof(arr2[0]);
    EXPECT_EQ(test_increase_decrease(arr2, size), true);

    int arr3[] = {1, 3, 2, 4, 5};
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(test_increase_decrease(arr3, size), false);

    int arr4[] = {8, 6, 4, 4, 1};
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(test_increase_decrease(arr4, size), true);
}

TEST (Diff_Elements_Test, Basic_1) {
    int arr1[] = {7, 6, 4, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(test_diff_of_elements(arr1, size), true);

    int arr2[] = {1, 2, 7, 8, 9};
    //int size = sizeof(arr2) / sizeof(arr2[0]);
    EXPECT_EQ(test_diff_of_elements(arr2, size), false);

    int arr3[] = {1, 3, 2, 4, 5};
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(test_diff_of_elements(arr3, size), true);

    int arr4[] = {8, 6, 3, 2, 1};
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(test_diff_of_elements(arr4, size), true);
}


/*
TEST (DiffTest, Basic){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_diff_of_elements(arr, size), true);

    int arr[] = {1, 2, 3, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(test_diff_of_elements(arr, size), false);

}
*/



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}