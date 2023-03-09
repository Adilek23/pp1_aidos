#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x, y;

    // 48
    // 4 and 8
    // x , y
    // y , x

    for (int i = 0; i < n; i++){
        x = a[i] % 10; // 10 % 10 = 0
        // x = 0
        y = (a[i] / 10) % 10; // 48 / 10 = 4 % 10 = 4
        if (x == 0){
        cout << y << " ";
        }
        else cout << x << y << " ";
    }
    
}