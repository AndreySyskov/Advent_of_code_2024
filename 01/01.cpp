#include <iostream>
#include <fstream>
#include "mylib.h"



using namespace std;

void printArrays(int arr[], int size);


int main (int argc, char* argv[]){

    
    int size = 0; // счетчик элементов

        // Имя файла передано вторым аргументом
    const char* fileName = argv[1];

    // Открываем файл для чтения
    ifstream inputFile(fileName);
    string line;
     while (getline(inputFile, line)) {
        ++size;
    }
    
    inputFile.clear();  // Сбрасываем возможные ошибки состояния
    inputFile.seekg(0, std::ios_base::beg);

    //cout<<size<<endl; 
    
    int arr_1[size], arr_2[size];
    //printArrays(arr_1, size);
    //printArrays(arr_2, size);

    // Чтение данных из файла и сохранение их в массив
    int number;
    int count = 1;
    int i = 0; // счетчик для массива 1
    int j = 0; // счетчик для массива 2
    while (inputFile >> number) {

     
        if (count%2!=0){
            ;
        arr_1[i] = number;
        i++;}
        else{
            
        arr_2[j] = number;
        j++;}
        count++;
    }
    //printArrays(arr_1, size);
    //printArrays(arr_2, size);
    inputFile.close();
    
    arr_sort(arr_1, size);
    
    arr_sort(arr_2, size);
    
    compar (arr_1, arr_2, size);

    cout<<"Общее расстояние между списками: "<< summ(arr_1, size);
}

void printArrays(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
