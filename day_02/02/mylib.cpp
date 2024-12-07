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

int test_increase_decrease (int* arr, int size){
    // Массив считается монотонным, если он пустой или содержит менее двух элементов
    if (size <= 1) return 0;

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
            std::cout<<i<<std::endl;
            return i;
        }
    }

    return 0;  // Массив монотонный
}

void Remove_by_index (int* arr, int& size, int index){
    for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        
        
        size--;
}

int test_diff_of_elements (int* arr, int size){
    //std::cout<<"Внутри функции diff"<<std::endl;
// Проверяем первый элемент

    if (abs(arr[0] - arr[1]) > 3) {
        return 0;
    }
    
    // Проверяем остальные элементы, кроме последнего
    for (int i = 0; i < size; ++i) {
        if (abs(arr[i] - arr[i + 1]) > 3 ) {
            return i;
        }
    }
    

    
    // Если таких элементов нет, возвращаем -1
    return -1;
}

int Violating_Element(int* arr, int& size) {
    // Проверка на пустой массив или массив из одного элемента
    if (size <= 1)
        return -1;

    int left = 0;
    int right = size - 1;

    // Двигаем левый указатель вправо, пока он указывает на элемент,
    // который больше своего предшественника
    while (left + 1 < size && arr[left] <= arr[left + 1])
        left++;

    // Двигаем правый указатель влево, пока он указывает на элемент,
    // который меньше своего последователя
    while (right - 1 >= 0 && arr[right] >= arr[right - 1])
        right--;

    // Находим индекс элемента, который нарушает монотонность
    if (left == size - 1 || right == 0)
        return -1;  // Массив уже монотонный, ничего удалять не надо

    int violatingIndex = -1;
    if (arr[left] > arr[left + 1]) {
        violatingIndex = left;
    }
    else if (arr[right] < arr[right - 1]) {
        violatingIndex = right;
    }
 return violatingIndex;
}

int createAndProcessArrays(int* originalArray, int arraySize, int index)
{
std::cout<<"Заход в функцию поиска"<<std::endl;
    
    // Создание первого нового массива без элемента с индексом 'index'
    int newArray1Size = arraySize - 1;
    int* newArray1 = new int[newArray1Size];
    for (int i = 0, j = 0; i < arraySize; ++i)
    {
        if (i != index)
            newArray1[j++] = originalArray[i];
           
    }
     printArrays (newArray1, newArray1Size);
     std::cout<<newArray1Size<<" "<<index<<std::endl;

    // Создание второго нового массива без элемента с индексом 'index + 1'
    int newArray2Size = arraySize - 1;
    int* newArray2 = new int[newArray2Size];
    for (int i = 0, j = 0; i < arraySize; ++i)
    {
        if (i != index + 1)
            newArray2[j++] = originalArray[i];
    }
    printArrays (newArray2, newArray2Size);
    std::cout<<newArray2Size<<" "<<index<<std::endl;

    if (test_diff_of_elements(newArray1, newArray1Size)==(-1)) return index;
    if (test_diff_of_elements(newArray2, newArray2Size)==(-1)) return index+1;

    // Освобождение памяти под созданные массивы
    delete[] newArray1;
    delete[] newArray2;

    if (index == (-1)) return -1;
    return 0;
}

int Double_element_Test(int* arr, int size) {
    int index = 0;
    for (int i = 1; i<size; i++){
        if (arr[i]==arr[i-1]) {index=i; break;}
    }
return index;
}

void printArrays(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

bool compareArrays(const int* arr1, const int* arr2, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            return false; // Если элементы не равны, возвращаем false
        }
    }
    return true; // Если все элементы равны, возвращаем true
}