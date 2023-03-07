#include <bits/stdc++.h>
using namespace std;
int main() {

int n;
cin >> n;
int a[n][n];

// for (int i = 0; i < n; i++){
//     for (int j = 0; j < n; j++){
//         cin >> a[i][j];
//     }
// }


// 3 3
// 1         2       3
// (1,1)    (1,2)    (1,3)
// 4         5       6
// (2,1)    (2,2)    (2,3)
// 7         8       9
// (3,1)    (3,2)    (3,3)



// a[2][2] = 5
// a[3][1] = 7

int mx = -999999;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if (i + j == n - 1){
            cout << "100" << " ";
        }
        else if ( i == j){
            cout << "100" << " ";
        }
        else cout << " ";
    }
    cout << endl;
}

}
    


