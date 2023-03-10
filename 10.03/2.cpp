#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    // 2     1      4        2 
    // 0,0   0,1    0,2      0,3    
    
    // 4     7      6        9
    // 1,0   1,1    1,2      1,3

    // 10     9     12       11
    // 2,0   2,1    2,2      2,3

    // 12    15     14       17
    // 3,0   3,1    3,2      3,3
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ((i + j) % 2 == 0){
                a[i][j] += 1;
            } 
            else a[i][j] -= 1;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
            }
            cout << endl;
    }
}