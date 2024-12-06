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

void printArrays(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}