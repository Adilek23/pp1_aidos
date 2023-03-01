#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 17;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(a[i] % 2 == 1){
            sum += a[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] % 3 == 0){
            a[i] = sum;
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}