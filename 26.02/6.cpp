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

int pos;
for (int i = 0; i < n; i++){
    if (a[i] < mn){
        mn = a[i];
        pos = i;
    }
}
cout << endl;
cout << mn;
cout << endl;
cout << pos;
return 0;

}