#include <gtest/gtest.h>
#include "mylib.h"



TEST(SummTest, BasicSumm) {
    int arr[] = {2, 1, 0, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(summ(arr, size), 11);
}

TEST(CounterTest, BasicCounter){
    int number = 2;
    int arr[] = {2, 1, 0, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    EXPECT_EQ(counter_function(number, arr, size), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}