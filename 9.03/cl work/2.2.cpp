#include <iostream>
using namespace std;

int x[10];

// 0 1 2 3 4 5 6 7 8 9
// 0 0 0 0 0 0 0 0 0 0


// 0     1      2       3     4       5     6 7 8 9
// x[0] x[1]   x[2]   x[3]   x[4]   x[5]


// x[a[i]]++

// 5 7 8 0 1 6 7 3 2 0



// x[0] = 5 
// x[1] = 7
// x[2] = 8
// x[3] = 0
// x[4] = 1
// x[5] = 6

// x[5]++;
// x[a[i]]++;




int main()
{
    int a[12];
    for (int i = 0; i < 12; i++){
        cin >> a[i];
    }
    int new_size = 0; // новый размер массива без дубликатов
    // считаем количество вхождений каждого числа в массиве
    for (int i = 0; i < 12; i++) {
        x[a[i]]++;
    }
    // x[a[i]]++; 
    // x[2]++;
    //

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
