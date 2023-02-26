#include <bits/stdc++.h>
using namespace std;
int main(){

//  [5][10][3][2][100]
//  0 1 2 3 4 

int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++){
    cin >> a[i];
}
int mx = -999999;

for (int i = 0; i < n; i++){
    if (a[i] > mx){
        mx = a[i];
    }
}
cout << mx;
// 5 > -1e6 mx = 5
// 10 > 5 mx = 10
// 3 > 10 mx = 10
// 2 > 10 mx = 10
// 100 > 10 mx = 100

return 0;
}