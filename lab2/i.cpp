#include <bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin >> n;
int arr[n];
int cnt=0;
int a=7;
for(int i=0; i<n; i++){
    cin >> arr[i];
}
for(int i=0; i<n; i++){
    if(arr[i]%10==a) cnt++;
    

}cout << cnt;
}
