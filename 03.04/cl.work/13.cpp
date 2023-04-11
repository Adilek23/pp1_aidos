#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string c;
    cin >> c;
    // hello
    // 
    // llo

    for (int i = 0; i < s.size(); i++){
        if (s.substr(i,c.size()) == c){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
}