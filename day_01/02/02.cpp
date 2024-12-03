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
    int arr_rez[size]={};
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
    
    for (int i=0; i<size; i++){
    arr_rez[i]=(counter_function(arr_1[i], arr_2, size))*arr_1[i];
    }

    //printArrays(arr_rez, size);

    cout<<"Оценка сходства между списками: "<< summ(arr_rez, size)<<endl;
}