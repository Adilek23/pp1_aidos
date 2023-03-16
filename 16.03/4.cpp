#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 3;
    int a[n][n];    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
        for(int j = 0; j < n; j++){
            sum[i] += a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        cout << sum[i] << ' ';
    }
}