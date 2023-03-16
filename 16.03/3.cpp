#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int p = 1;
    for (int i = 0; i < n; i++){
        if (i == 0){
            for(int j = 0; j < n; j++){
                p *= a[i][j];
            }   
        }
    }
    cout << p;
}