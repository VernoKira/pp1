#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int first = arr[0][0];
    bool ok = false;
    int mx = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mx < arr[i][j]) mx = arr[i][j];
            if(first != arr[i][j]){
                ok = true;
            }
        }
    }
    int scmax = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(scmax < arr[i][j] and arr[i][j] != mx){
                scmax = arr[i][j];
            }
        }
    }
    if(ok){
        cout << scmax;
    }else{
        cout << 0;
    }
}