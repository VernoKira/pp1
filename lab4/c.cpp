#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    int cnt;
    cin >> n>> k;
    int arr[n][k];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(arr[i][j]<0) cnt++;
        }
    }
    cout <<cnt<< endl;
}
    
  