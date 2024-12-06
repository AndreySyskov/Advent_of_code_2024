#ifndef MYLIBRARY_H
#define MYLIBRARY_H

void arr_sort (int* arr, int size);
// Предусловие: массив создан, заполнен значениями, переменная size содержит размер массива
// Постусловие: массив отсортирован по возрастанию

void compar (int* arr_1, int* arr_2, int size);
// Предусловие: массивы заполнены значениями, отсортированными по возрастанию, переменная size содержит размер массивов
// Постусловие: массив arr_1 заполнен разностью значений элементов двух массивов, взтых по модулю

int summ (int* arr_1, int size);
// Предусловие: массив содержит значения
// Постусловие: функция возвращает сумму всех элементов массива

#endif // MYLIBRARY_H