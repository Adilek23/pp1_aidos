#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 3;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 3 7 1
    // 1 7 3
    // 1 3 7

    // 1 5
    // 1 5 7
    // 0 1 5 7
    // 0 1 3 5 7
    // 0 1 3 5 6 7

    // 1 0 5 3 7 0 3 6

    // 0 1 5 3 7 0 3 6    
    // 0 1 3 5 7 0 3 6
    // 0 0 1 3 3 5 6 7 

    int cnt = 0;
    int x;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                x = a[i];  
                a[i] = a[j];
                a[j] = x;  
                cnt++;
            }
        }        
    }
    for (int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << cnt;

}