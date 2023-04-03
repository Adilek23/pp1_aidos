#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    string s[n];
    string c[n];
    for (int i = 0; i < n; i++){
        cout << "~~~~~~~~~~~~~~~~~~~~~~";
        cout << endl;
        cout << "Enter your name: ";
        cin >> s[i];    
    cout << "Enter your age: ";
    cin >> a[i];

    cout << "Where are you from: ";
    cin >> c[i];
    }
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~";
    cout << endl;
    cout << "Ankets people: ";
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << i + 1 << endl << "Name is: " << s[i];
        cout << endl;
        cout << "Age is: " << a[i];
        cout << endl;
        cout << "From: " << c[i];
        cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~";
        cout << endl;
    }
        cout << "Thanks for attention!";
         cout << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~";

}