#include <iostream>
#include "mylib.h"

using namespace std;

void printArrays(int arr[], int size);


int main (){
    int size=0;

    cout<<"ВВедите число строк списка идентификаторов местоположения:";
    cin>>size;

    int arr_1[size], arr_2[size];

    cout<<"Введите через пробел значения идентификаторов для первой группы:";
    for (int i=0; i < size; i++){
    cin>>arr_1[i];
    }
    printArrays(arr_1, size);
    cout<<"Введите через пробел значения идентификаторов для второй группы:";
    for (int i=0; i < size; i++){
    cin>>arr_2[i];
    }
    printArrays(arr_2, size);
    arr_sort(arr_1, size);
    printArrays(arr_1, size);
    arr_sort(arr_2, size);
    printArrays(arr_2, size);
    compar (arr_1, arr_2, size);

    cout<<"Общее расстояние между списками: "<< summ(arr_1, size);
}

void printArrays(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
