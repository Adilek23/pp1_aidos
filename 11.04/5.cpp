// 12.	Дана строка - предложение. Вывести самое длинное слово и его длину.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string f;
    int mx = 0;
    //adil aidos telephone
for (int i = 0; i < s.size(); i++){
    string x;
    while (i < s.size() && s[i] != ' ') {
            x += s[i];
            i++;
    }

    // x = "adil";
    // // adil aidos telephone
    // // 
    // x = "dil";
    // // 3
    // x = "il";
    // // 2
    // x = "l";
    // x = "aidos";
    // x = "idos", "dos", "os", "s";
    // x = "telephone";

    if (x.size() > mx){
        f = x;
        // telephone
        // 9
        mx = x.size();
    }
    
}

cout << f;
// f = telephone

cout << endl;

cout << mx;
// mx = 9


}