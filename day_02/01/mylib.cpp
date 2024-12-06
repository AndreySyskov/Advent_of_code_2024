#include <iostream>
#include "mylib.h"

void arr_sort (int* arr, int size){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Меняем arr[j] и arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void compar (int* arr_1, int* arr_2, int size){
    for (int i=0; i<size; i++){
        (arr_1[i]>=arr_2[i])?(arr_1[i]=arr_1[i]-arr_2[i]):(arr_1[i]=arr_2[i]-arr_1[i]);
        
    }
}

int summ (int* arr_1, int size){
    int summa=0;
    for (int i=0; i<size; i++){
        summa+=arr_1[i];
    }
    return summa;
}

int counter_function(int number, int* arr_2, int size){
    int counter=0;
    for (int i=0; i<size; i++){
        if (arr_2[i]==number) counter++; 
    }
return counter;
}

bool test_increase_decrease (int* arr, int size){
    // Массив считается монотонным, если он пустой или содержит менее двух элементов
    if (size <= 1) return true;

    bool increasing = true;  // Предполагаем, что массив возрастает
    bool decreasing = true;  // Предполагаем, что массив убывает

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[i - 1]) {
            decreasing = false;  // Если хотя бы одно увеличение, то неубывающий
        }
        if (arr[i] < arr[i - 1]) {
            increasing = false;  // Если хотя бы одно уменьшение, то невозрастающий
        }
        
        // Если массив не увеличивается и не уменьшается, значит, он не монотонный
        if (!increasing && !decreasing) {
            return false;
        }
    }

    return true;  // Массив монотонный
}



bool test_diff_of_elements (int* arr, int size){
    //std::cout<<"Внутри функции diff"<<std::endl;
int x;
for (int i=1; i<size; i++){
    
    x=arr[i]-arr[i-1];
    //std::cout<<x<<std::endl;
    if (x==0) return false;
    else {
        if (x<0) x=x*(-1);
        if (x>3) return false;
    }
}
return true;
}
 



void printArrays(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}