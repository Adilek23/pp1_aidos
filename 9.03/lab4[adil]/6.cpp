#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = n, x = n, l = n, o = n;
    int a[n][n];

    
    for (int i = 1; i <= n * 2 - 1; i++){
        for (int j = 1; j <= n * 2 - 1; j++){
            if (i == n){
                cout << 'h' << " ";
            }
            else if (j == 1 or j == n * 2 - 1){
                cout << 'h' << " ";
            }
            else cout << " " << " ";
        }
        cout << endl;
    }
    cout << endl;

    int b[m][m];
    for (int i = 1; i <= m * 2 - 1; i++){
        for (int j = 1; j <= m * 2 - 1; j++){
            
            if ( i == 1 or i == m * 2 - 1){
                cout << 'e' << " ";
            }
            else if (j == 1) {
                cout << 'e' << " ";
            }
            else if (i == m ){
                cout << 'e' << " ";
            }
            else cout << " " << " ";

        }
        cout << endl;
    }
    cout << endl;
    int c[x][x];
    for (int i = 1; i <= x * 2 - 1; i++){
        for (int j = 1; j <= x * 2 - 1; j++){
            if (j == 1){
                cout << 'l' << " ";
            }
            else if ( i == x * 2 - 1){
                cout << 'l' << " ";
            }
            else cout << " " << " ";
        }
        cout << endl;
    }
    cout << endl;
    int f[l][l];
    for (int i = 1; i <= l * 2 - 1; i++){
        for (int j = 1; j <= l * 2 - 1; j++){
                    if (j == 1){
                cout << 'l' << " ";
            }
            else if ( i == x * 2 - 1){
                cout << 'l' << " ";
            }
            else cout << " " << " ";
        }
        cout << endl;
    } 
    cout << endl;
    int t[o][o];
    for (int i = 1; i <= o * 2 - 1; i++){
        for (int j = 1; j <= o * 2 - 1; j++){
            if (i == 1 or i == o * 2 - 1){
                cout << "O" << " ";
            }
            else if (j == 1 or j == o * 2 - 1){
                cout << "O" << " ";
            }
            else cout << " "<< " ";
        }
        cout << endl;
    }
}