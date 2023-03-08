#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 4;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int j = 0; j < n; j++){
        if (j == 1){
            for (int i = 0; i < n; i++){
                if(a[i][j] < 0){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}