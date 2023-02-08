#include <bits/stdc++.h>
using namespace std;

int main(){
int n,i;
cin>> n >> i;
int arr[n];
for(int i=0;i<n; i++){
    cin >> arr[i];
}
int j;
int arr[j];
for(int j=0;j<n;j++){
    if (arr[j]==arr[i]){
        continue;
    }
}
cout << arr[j];


    return 0;
}