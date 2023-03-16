#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // 3 4
    // sum = 0; 1 2 3 4  = 10
    



    // sum[3]
    // sum[1] = 1 + 2 + 3 + 4


    // для произольной матрице
    // sum[n];
    // sum1[m];    

    // для квадрат матрице
    // sum[n];
    // sum1[n];





    int sum[n]; // sum strok
    int sum1[m]; // sum stolbcov

    for (int i = 0; i < n; i++){
        sum[i] = 0;
        for (int j = 0; j < m; j++){
            sum[i] += a[i][j];
        }
    }
    for (int j = 0; j < m; j++){
        sum1[j] = 0;
        for (int i = 0; i < n; i++){
            sum1[j] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        cout << "The sum of row number " << i + 1 << " is " << sum[i];
        cout << endl;
    }
    for (int j = 0; j < m; j++){
        cout << "The sum of column number " << j + 1 << " is " << sum1[j];
        cout << endl;
    }
    // 5
    // 1 2 3 4 5 = 15 
    // 2 3 4 5 6 = 20
    // 3 4 5 6 7 = 30
    //  sum += a[i][j]

    //   j j j j 
    // i 1 2 3 4 // 0 = 10
    // i 6 2 4 1 // 1 =  
    // i 7 0 1 3 // 2




}