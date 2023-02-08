#include <bits/stdc++.h>
using namespace std;

bool getAns(int arr[], int n, int k, int i){
    if(arr[i] == k) return true;
    if(i == n) return false;
    return getAns(arr, n, k, ++i);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    bool ok = getAns(arr, n, k, 0);
    if(ok) cout << "Yes";
    else cout << "No";
    
}