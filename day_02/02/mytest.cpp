#include <gtest/gtest.h>
#include "mylib.h"

TEST (Remove_by_Index_Test, Basic_1){
    int arr1[] = {2, 1, 1, 0, 2, 5};
    int arr1_r[]={2, 1, 0, 2, 5};
    int index_1 = 2;
    int size_1 = sizeof(arr1) / sizeof(arr1[0]);

    Remove_by_index(arr1, size_1, index_1);
    EXPECT_TRUE(compareArrays(arr1, arr1_r, 5));

    int arr2[] = {1, 2, 3, 4, 5, 6};
    int arr2_r[]={1, 2, 3, 4, 6};
    int index_2 = 4;
    int size_2 = sizeof(arr1) / sizeof(arr1[0]);

    Remove_by_index(arr2, size_2, index_2);
    EXPECT_TRUE(compareArrays(arr2, arr2_r, 5));

   

}

TEST (Increase_Decrease_Test, Basic_1) {
    int arr1[] = {5, 1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(Violating_Element(arr1, size), 0);

    int arr2[] = {1, 2, 3, 4, 5, 6};
    //int size = sizeof(arr2) / sizeof(arr2[0]);
    EXPECT_EQ(Violating_Element(arr2, size), -1);

    int arr3[] = {6, 5, 4, 3, 2, 1};
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(Violating_Element(arr3, size), -1);

    int arr4[] = {1, 2, 2, 4, 5, 6};
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(Violating_Element(arr4, size), 0);
}

TEST (Increase_Decrease_Test, Basic_2) {
    int arr1[] = {7, 6, 4, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(Violating_Element(arr1, size), 0);

    int arr2[] = {1, 2, 7, 8, 9};
    //int size = sizeof(arr2) / sizeof(arr2[0]);
    EXPECT_EQ(Violating_Element(arr2, size), 0);

    int arr3[] = {1, 3, 2, 4, 5};
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(Violating_Element(arr3, size), 2);

    int arr4[] = {8, 6, 4, 4, 1};
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(Violating_Element(arr4, size), 0);
}

TEST (Diff_Elements_Test, Basic_1) {
    int arr1[] = {7, 6, 4, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(test_diff_of_elements(arr1, size), -1);

    int arr2[] = {1, 2, 7, 8, 9};
    //int size = sizeof(arr2) / sizeof(arr2[0]);
    EXPECT_EQ(test_diff_of_elements(arr2, size), 2);

    int arr3[] = {1, 3, 2, 4, 5};
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(test_diff_of_elements(arr3, size), -1);

    int arr4[] = {8, 6, 3, 2, 1};
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(test_diff_of_elements(arr4, size), -1);

    int arr5[] = {5, 1, 2, 3, 4};
    //int size = sizeof(arr5) / sizeof(arr5[0]);
    EXPECT_EQ(test_diff_of_elements(arr5, size), 0);

    int arr6[] = {1, 5, 2, 3, 4};
    //int size = sizeof(arr6) / sizeof(arr6[0]);
    EXPECT_EQ(test_diff_of_elements(arr6, size), 1);

    int arr7[] = {7, 8, 4, 3, 2};
    //int size = sizeof(arr7) / sizeof(arr7[0]);
    EXPECT_EQ(test_diff_of_elements(arr7, size), 1);

    int arr8[] = {4, 5, 9, 8, 9};
    //int size = sizeof(arr8) / sizeof(arr8[0]);
    EXPECT_EQ(test_diff_of_elements(arr8, size), 2);
}


TEST (Diff_Elements_Test, Found_1) {
    int arr1[] = {7, 6, 10, 4, 2};
    int index_1 = 1;
    int size = sizeof(arr1) / sizeof(arr1[0]);
    EXPECT_EQ(createAndProcessArrays(arr1, size, index_1), 2);


    int arr3[] = {1, 3, 2, 4, 5};
    int index_3 = -1;
    //int size = sizeof(arr3) / sizeof(arr3[0]);
    EXPECT_EQ(createAndProcessArrays(arr3, size, index_3), -1);

    int arr4[] = {8, 6, 3, 2, 1};
    int index_4 = -1;
    //int size = sizeof(arr4) / sizeof(arr4[0]);
    EXPECT_EQ(createAndProcessArrays(arr4, size, index_4), -1);


    int arr6[] = {1, 5, 2, 3, 4};
    int index_6 = 0;
    //int size = sizeof(arr6) / sizeof(arr6[0]);
    EXPECT_EQ(createAndProcessArrays(arr6, size, index_6), 1);

    int arr7[] = {7, 8, 4, 3, 2};
    int index_7 = 1;
    //int size = sizeof(arr7) / sizeof(arr7[0]);
    EXPECT_EQ(createAndProcessArrays(arr7, size, index_7), 1);

    int arr8[] = {4, 5, 9, 8, 9};
    int index_8 = 2;
    //int size = sizeof(arr8) / sizeof(arr8[0]);
    EXPECT_EQ(createAndProcessArrays(arr8, size, index_8), 3);
}




TEST (Double_element_Test, Basic){
    int arr_1[] = {1, 1, 3, 4, 5, 6};
    int size_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    EXPECT_EQ(Double_element_Test(arr_1, size_1), 1);

    int arr_2[] = {1, 2, 3, 7, 8, 8};
    int size_2 = sizeof(arr_2) / sizeof(arr_2[0]);
    EXPECT_EQ(Double_element_Test(arr_2, size_2), 5);

    int arr_3[] = {1, 2, 3, 3, 8, 9};
    int size_3 = sizeof(arr_3) / sizeof(arr_3[0]);
    EXPECT_EQ(Double_element_Test(arr_3, size_3), 3);

    int arr_4[] = {1, 1, 3, 7, 7, 9};
    int size_4 = sizeof(arr_4) / sizeof(arr_4[0]);
    EXPECT_EQ(Double_element_Test(arr_4, size_4), 1);

}




int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}