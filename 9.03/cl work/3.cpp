#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int posi;
    int posj;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                posj = j;
                posi = i;
                cout << posi << " " << posj;
                cout << endl;
            }
        }
    }
}


 // j j j j j 
//i 1 2 3 4 5
//i 2
//i 3
//i 4