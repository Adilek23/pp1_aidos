#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 5
    // 1 5 3 0 2


    // a[i] = 1
    // a[i + 1] = 5
    // a[i + 2] = 3
    // a[i + 3] = 0
    // a[i + 4] = 2



// 5
// 100 50 70 80 150
//  0 1 2 3 4
// a[i]
// 100 50 70 80 150

// i
// 2 4
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            cout << a[i] << " ";
        }
    }
}