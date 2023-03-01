#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int l,r;
    cin >> l >> r;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i = l; i <= r; i++){
        sum += a[i];
    }
    cout << sum;
}