#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (i == n - 1){
            a[i] = a[0];
        }
        else{ 
        a[i + 1] = a[i];
    }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}