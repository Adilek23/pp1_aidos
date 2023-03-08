#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5, m = 6;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum[m];
    int mx[n];
    int mn[n];
    for (int j = 0; j < m; j++){
        sum[j] = 0;
        for (int i = 0; i < n; i++){
            sum[j] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        mx[i] = -999999;
        for (int j = 0; j < m; j++){
          if (a[i][j] > mx[i]){
                mx[i] = a[i][j];
            }
        }
    }
    cout << endl;
    for (int j = 0; j < m; j++){
        cout << sum[j] / n << " ";
    }
    for (int i = 0; i < n; i++){
        mn[i] = 999999;
        for (int j = 0; j < m; j++){
             if (a[i][j] < mn[i]){
                mn[i] = a[i][j];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << mx[i] << " " << mn[i];
        cout << endl;
    }
}