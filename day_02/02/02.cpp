#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "mylib.h"

#define MAX_SIZE 8



using namespace std;

void printArrays(int arr[], int size);


int main (int argc, char* argv[]){

    
    int count = 0; // счетчик безопасных строк
    
    bool flag = false;
    int index = 0;
    int index_2 = 0;
    
    const char* fileName = argv[1]; // Имя файла передано вторым аргументом

    // Открываем файл для чтения
    ifstream inputFile(fileName);
    string line;
     while (getline(inputFile, line)) {
        istringstream iss(line); // Создаем поток для обработки строки
        int numbers[MAX_SIZE];
        int size=0;
        bool flag;
         while (iss >> numbers[size]) {
            ++size;
            
        }
    
    index=Double_element_Test(numbers, size);
    if (index) {flag=true; Remove_by_index(numbers, size, index);}
    index=Double_element_Test(numbers, size);
    if (index&&flag) {flag = false; index = 0; continue;}

    index = test_diff_of_elements(numbers, size);
    if (index) {
        flag = true; 
        
        
        }
    
    count++;
     
     
     
     //printArrays(numbers, count);


    }
    

    //printArrays(arr_1, size);
    //printArrays(arr_2, size);
    inputFile.close();
    
    

    //printArrays(arr_rez, size);

    cout<<"Количество безопасных отчетов: "<<count<<endl;
}