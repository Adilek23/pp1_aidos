#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
int cnta = 0;
int cntA = 0;
for (int i = 0; i < s.size(); i++){
    if (s[i] >= 'a' and s[i] <= 'z'){
        cnta++;
    }
    else if (s[i] >= 'A' and s[i] <= 'Z'){
        cntA++;
    }
}
cout << cnta << " " << cntA;
}