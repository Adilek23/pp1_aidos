#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mx = -999999;
    int mn = 999999;

    for (int i = 0; i < n; i++){
        if (a[i] >= mx) {
            mx = a[i];
        }
        else if (a[i] <= mn){
            mn = a[i];
        }
    }



    // if (a[i] )


    // 5  
    // 1 9 0 5 6
    // 1 0 0 5 6

    // 9 , 0
    // a[posmx] = a[posmn]





    // 1 1 0 0 1
    // 0 0 0 0 0

    // 1 , 0

    // if (a[i] == mx){
    // a[i] = mn;
    // }


    // 1 1 9 9 0
    // 1 1 9 0 0

    // mx = 9
    // mn = 0

    // 1 1 0 0 0 


    for (int i = 0; i < n; i++){
        if (a[i] == mx){
            a[i] = mn;
        
        }
    }
    // 5
    // 1 1 0 0 1
    // 0 0 0 0 0 
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}