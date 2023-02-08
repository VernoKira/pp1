#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    int arr[n];
    int l,r; cin >> l >> r;
    l--;
    r--;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i=0;
    while(i<l){
        cout << arr[i]<<" ";
        i++;
    }
    while(r>=l){
        cout << arr[r]<<" ";
        r--;
    }

}