#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    int cnt1=0;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cnt++;
        }
        else{
            cnt1++;
        }
    }
    cout << cnt << ' ' << cnt1;
}