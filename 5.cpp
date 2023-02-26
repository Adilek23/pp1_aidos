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
int mn = 999999;

for (int i = 0; i < n; i++){
    if (a[i] < mn){
        mn = a[i];
    }
}
// 5
// 10 5 3 50 26

// 10 < 1e6 mn = 10
// 5  < 10  mn = 5
// 3 < 5 mn = 3
// 50 < 3 mn 3
// 26 < 3 mn = 3

cout << mn;
return 0;
}