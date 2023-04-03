#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cntA = 0;
    int cnta = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' and s[i] <= 90){
            cntA++;
        }
        else if (s[i] >= 'a' and s[i] <= 'z'){
            cnta++;
        }
    }
    cout << cntA << " " << cnta;
}