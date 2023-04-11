#include <bits/stdc++.h>
using namespace std;
int main() {
    // 2.	Дана строка. Подсчитать количество содержащихся в ней цифр.
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' and s[i] <= '9'){
            cnt++;
        }
    }
    cout << cnt;
}