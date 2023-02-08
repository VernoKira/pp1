#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int i = 0, j = 0;
    int x = 1;
    while(x <= pow(n, 2)){
        // from left to right
        while(j <= n-1-i){
            arr[i][j] = x;
            x++;
            j++;
        }
        j--;
        i++;
        // from up to down
        while(i <= j){
            arr[i][j] = x;
            x++;
            i++;
        }
        i--;
        j--;
        // from right to left
        while(j >= n-1-i){
            arr[i][j] = x;
            x++;
            j--;
        }
        j++;
        i--;
        // from down to up
        while(j < i){
            arr[i][j] = x;
            x++;
            i--;
        }
        i++;
        j++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
}