#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5, m = 4;
    int a[n][m]; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // не решена

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
 