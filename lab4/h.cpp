#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int arr[n][k];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<k; j++){
            cin >> arr[i][j];
        }
    }  
    int minsum=10000, pos=0;
    for(int i=0 ; i<n; i++){ 
        int sum=0;
        for(int j=0 ; j<k; j++){
            sum+=arr[i][j];
        }
            if(minsum>sum){
                minsum=sum;
                pos=i+1;
            }

        }
     cout << pos << " ";
}