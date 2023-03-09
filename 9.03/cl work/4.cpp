#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        if (i == 5){
            break;
        }
        else 
        cout << i * 2 << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << i << " ";
    }
}