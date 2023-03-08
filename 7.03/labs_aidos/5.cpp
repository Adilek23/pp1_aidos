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
    int cnt7 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i][j] == 7){
                cnt7++;
            }
        }
    }
    cout << cnt7;
}