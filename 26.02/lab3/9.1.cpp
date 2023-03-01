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
    reverse(a,a + r);
    for (int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}