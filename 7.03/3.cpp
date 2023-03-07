#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // 5
    // 1 2 3 4 5
    
    //  sum += sum + 1
    // 1 + 1 = 2

    
    for (int i = 0; i < n; i++){
        if ((a[i] > 0 and a[i + 1] > 0) or (a[i] < 0 and a[i+1] < 0)){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

}