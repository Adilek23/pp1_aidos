#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] % 2 == 0){
                cnt2++;
            }
            else cnt1++;
        }
    }
    cout << cnt2 << " " << cnt1;
}