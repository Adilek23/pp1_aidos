#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    // [][][][][]
    // 0 1 2 3 4
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
    sum += a[i];
    }
    cout << sum;
}