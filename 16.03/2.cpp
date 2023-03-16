#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , m;
    cin >> n >> m;
    int a[n][m];    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int max[m];
    for(int j = 0; j < m; j++){
        max[j] = -999999;
        for(int i = 0; i < n; i++){
            if(a[i][j] > max[j]){
            max[j] = a[i][j];
        }
    }
    }
        for(int j = 0; j < m; j++){
            cout << max[j] << ' ';
        }
    }






