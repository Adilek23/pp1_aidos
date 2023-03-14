#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 9;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        // 25 2 + 5
        int c = a[i] % 10;
        int x = (a[i] / 10) % 10;
        sum = c + x;
        a[i] = sum;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

}