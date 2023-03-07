#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 2, m = 3;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cout << endl;
    int sum[m];
    for (int j = 0; j < m; j++){
        sum[j] = 0;
        for (int i = 0; i < n; i++){
            if (a[i][j] > 0){
                sum[j] += a[i][j];
            }        
        }
    }
    for (int j = 0; j < m; j++){
        cout << sum[j] / n << " ";
    }
    

}

    