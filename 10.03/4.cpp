#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int mx = -999999;
    int mx0 = -999999;
    int posi, posj;
    int poi , poj;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                if (a[i][j] > mx){
                    mx = a[i][j];
                    posi = i;
                    posj = j;
                }      
                else if (a[i][j] != mx and a[i][j] > mx0){
                    mx0 = a[i][j];
                    poi = i;
                    poj = j;
                }
            }
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: " << posi + 1 << ';' << posj + 1;
    cout << endl;
    cout << "Second maximum element is: " << mx0 << " with coordinates: " << poi + 1 << ';' << poj + 1;

        // 5 5
        // 1 
        //   1 
        //     1  
        //       1 
        //         1
}