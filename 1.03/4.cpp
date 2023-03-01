#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 12;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    int mx = -999999;
    int mn = 999999;
    for (int i = 0; i < n; i++){
        if (a[i] > mx) {
            mx = a[i];
        }
        else if (a[i] < mn){
            mn = a[i];
        }
    }
    cout << mx + mn;
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}