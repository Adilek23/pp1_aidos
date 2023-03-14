#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    string s[n];
    string c[n];
    for (int i = 0; i < n; i++){
    cout << "Enter your name: ";
    cin >> s[i];
    cout << endl;
    cout << "Enter your age: ";
    cin >> a[i];
    cout << endl;
    cout << "Where are you from: ";
    cin >> c[i];
    cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << i + 1 << " " << "Name is: " << s[i];
        cout << endl;
        cout << "Age is: " << a[i];
        cout << endl;
        cout << "He is from: " << c[i];
        cout << endl;
    }

}