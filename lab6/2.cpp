#include <bits/stdc++.h>
using namespace std;
void  print(int a[], int n ){
    for(int i = 0; i < n; i++){
       cout  << a[i] << " ";
    }

}

void  read(int a[], int n ){
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }

}

void diff(int a[], int b[] , int d[], int n){
    for(int i=0; i<n ; i++){
   d[i]=abs(a[i]- b[i]);
     }
}
   
int main(){
    int n; cin >> n;
    int a[n], b[n], d[n];
    read (a , n);
    read (b , n);
    diff (a,b ,d , n);
    print(d, n);
}