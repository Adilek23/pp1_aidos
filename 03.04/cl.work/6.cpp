#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin,s);

s[2] = 'D';
s[4] = 'S';


for (int i = 0; i < s.size(); i++){
    s[i] += 32;
}

cout << s;
}