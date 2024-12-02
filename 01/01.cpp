#include <iostream>

using namespace std;

void arr_sort (int* arr, int size);
// Предусловие: массив создан, заполнен значениями, переменная size содержит размер массива
// Постусловие: массив отсортирован по возрастанию

void compar (int* arr_1, int* arr_2, int size);
// Предусловие: массивы заполнены значениями, отсортированными по возрастанию, переменная size содержит размер массивов
// Постусловие: массив arr_1 заполнен разностью значений элементов двух массивов, взтых по модулю

int summ (int* arr_1, int size);
// Предусловие: массив содержит значения
// Постусловие: функция возвращает сумму всех элементов массива

int main (){
    int size=0;

    cout<<"ВВедите число строк списка идентификаторов местоположения:";
    cin>>size;

    int arr_1[size], arr_2[size];

    cout<<"Введите через пробел значения идентификаторов для первой группы:";
    for (int i=0; i < size; i++){
    cin>>arr_1[i];
    }
    cout<<"Введите через пробел значения идентификаторов для второй группы:";
    for (int i=0; i < size; i++){
    cin>>arr_2[i];
    }
    arr_sort(arr_1, size);
    arr_sort(arr_2, size);

    cout<<"Общее расстояние между списками: "<< summ(arr_1, size);
}

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
        summa=summa+arr_1[i];
    }
    return summa;
}
