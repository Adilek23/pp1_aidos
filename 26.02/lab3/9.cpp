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
    // 5
    // 1 5 6 3 4
    
    for (int i = 1; i < l; i++){
        cout << a[i] << " ";
    }

    for (int i = r; i >= l; i--){
        cout << a[i] << " ";
    }
    
    for (int i = r + 1; i <= n; i++){
        cout << a[i] << " ";
    }
}