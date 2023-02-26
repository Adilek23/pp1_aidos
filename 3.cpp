#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    // [][][][][]
    // 0 1 2 3 4
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int multi = 1;
    for (int i = 1; i <= n; i++){
    multi *= a[i];
    }
    cout << multi;
}