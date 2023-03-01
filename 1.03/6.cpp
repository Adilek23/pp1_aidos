#include <bits/stdc++.h>

using namespace std;

int main()
{
int n, m;
cin >> n >> m;
int a[n];
int a2[m];
int a3[n + m];
for (int i = 0; i < n; i++){
    cin >> a[i];
}
for (int i = 0; i < m; i++){
    cin >> a2[i];
}

for (int i = 0; i < n; i++) {
a3[i] = a[i];
}

for (int i = n; i < n + m; i++) {
a3[i] = a2[i - n];
}
sort(a3, a3 + n + m);
for (int i = 0 ; i < n + m; i++) {
    if (a3[i] == a3[i + 1]){
        cout << a3[i] << " ";
    }
}
}