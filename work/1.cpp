#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int mx=-999999;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx = a[i];
        }
    }
    int mn=999999;
    for(int i = 0; i < n;i++){
        if(a[i] < mn){
            mn = a[i];
        }
    }
    cout << mx << " " << mn;

}