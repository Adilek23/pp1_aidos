#include <bits/stdc++.h>
using namespace std;
int main() {


// 1.	Дан символ C. Вывести два символа, 
//  первый из которых предшествует символу C в кодовой таблице,
//  а второй следует за символом C.

string s = "c";
char c = s[0] + 1;
char x = s[0] - 1;
cout << x << " " << c;


}