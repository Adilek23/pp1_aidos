#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 4;
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
    int min = 999999;
    int pos;
    for(int i = 0; i < n; i++){
        if(sum[i] < min){
            min = sum[i];
            pos = i;
        }
    }
    cout << min << ' ' << pos;
    
        


        // 5 1 3 2
        // 1
    }
    
