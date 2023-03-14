#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 4
    // 2
    // n / 2 количество перестановок
    // 1 2 3 4
    // 0 1 2 3 
    // 2 3
    // n = 4

    // 3 4 1 2

    // 9
    // количество перестановок (n - 1) / 2
    // 1 2 3 4 5 6 7 8 9
    // 6 7 8 9 5 1 2 3 4
    //
    if (n % 2 == 0){
        for (int i = n / 2; i < n; i++){
            cout << a[i] << " ";
        }
        for (int i = 0; i < n / 2; i++){
            cout << a[i] << " ";
        }
            cout << n / 2;
    }

    // 5
    // 1 2 3 2 1
    // 0 1 2 3 4 
    // 2 1 3            
    // 0 1 2 3 4 5 6 7 8
    // 1 2 3 4 5 6 7 8 9
    // 6 7 8 9 5 1 2 3 4
    else {
        for (int i = (n / 2) + 1; i < n; i++){
            cout << a[i] << " ";
        }
        for (int i = n / 2; i < n / 2 + 1 ; i++){
            cout << a[i] << " ";
        }
        for (int i = 0; i < (n / 2); i++){
            cout << a[i] << " ";
        }
        cout << (n - 1) / 2;

    }   
}
