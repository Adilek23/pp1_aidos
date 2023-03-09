#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
        cin >> a[i][j];
    }
    }
    int mx = -999999;
    int posi;
    int posj;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j] > mx){
                mx = a[i][j];
                posi = i;
                posj = j;
            }
        }
    }
    cout << posi << " " << posj;
}