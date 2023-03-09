#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }   
    int mx = -999999;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(a[i][j] > mx){
                mx = a[i][j];
            }
        }
        // 9
        
    }
    int mx0 = -999999;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] != mx and a[i][j] > mx0){
                mx0 = a[i][j];
            }
        }
    }
    cout << mx0 << " " << mx;
}