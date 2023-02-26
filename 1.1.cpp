#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    // [][][][][]
    // 0 1 2 3 4
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 5
    // 1 50 3 20 0
    cout << a[0] << endl; // 1 
    cout << a[1] << endl; // 50
    cout << a[2] << endl; // 3
    cout << a[3] << endl; // 20 
    cout << a[4] << endl; // 0


}