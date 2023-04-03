#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5;
    int a[n];
    for (int i = 0; i < 5; i++){
        cin >> a[i];
    }
    int sum = 0;
    float sum1 = 0;
    float cnt = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] < 0){
            cnt++;
            
            sum1 += a[i];
        }
    }
    float sraf = abs(sum1 / cnt);
    for (int i = 0; i < n; i++){
        if (a[i] > sraf){
            sum += a[i];
        }
    }
    cout << sum;
}