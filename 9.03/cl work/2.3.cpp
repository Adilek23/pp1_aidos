#include <iostream>
using namespace std;

int main()
{
    int arr[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0}; // пример массива
    int count[2] = {0, 0}; // массив для подсчета количества вхождений каждого числа
    int new_size = 0; // новый размер массива без дубликатов

    // считаем количество вхождений каждого числа в массиве
    for (int i = 0; i < 12; i++) {
        count[arr[i]]++;
    }

    // считаем количество уникальных чисел в массиве
    for (int i = 0; i < 2; i++) {
        if (count[i] <= 2) {
            new_size += count[i];
        }
    }

    // создаем новый массив без дубликатов
    int new_arr[new_size];
    int index = 0;
    for (int i = 0; i < 12; i++) {
        if (count[arr[i]] <= 2) {
            new_arr[index] = arr[i];
            index++;
        }
    }

    // выводим новый массив без дубликатов
    for (int i = 0; i < new_size; i++) {
        cout << new_arr[i] << " ";
    }
    cout << endl;

    return 0;
}
