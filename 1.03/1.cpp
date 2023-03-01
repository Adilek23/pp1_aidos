#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 20;
    int a[n];
    for(int i = 0; i < 20; i++){
        cin >> a[i];
    }
    int cnt2 = 0;
    int cnt1 = 0;
    for(int i = 0; i < 20; i++){
        if(a[i] % 2 == 0){
            cnt2++;
        }
        else{
            cnt1++;
        }
    }
    if(cnt1<cnt2){
        cout << "четных больше";
    }
    else if(cnt1>cnt2){
        cout << "odd great";
    }
    else{
        cout << "=";
    }
}