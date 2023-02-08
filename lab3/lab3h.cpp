/*#include <bits/stdc++.h>
using namespace std;

int main(){
int n; cin  >> n;
int arr[n];
int l , r,sum=0;
cin >> l >> r;
l--;
r--;
for (int i=0; i<n ; i++ ){
    cin >> arr[i];
}

while (l<=r){
    sum+=arr[l];
    l++;
}
cout << sum << " ";



}*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int l, r, sum = 0;
    cin >> l >> r;
    l--;
    r--;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(l <= r){
        sum += arr[l];
        l++;
    }
    cout << sum;
}