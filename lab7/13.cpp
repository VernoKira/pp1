#include <bits/stdc++.h>
using namespace std;
 void getNum(int n, int x){
 if(x==n+1) return;
 cout << x << " ";
 getNum (n , x+1);

 

 }
int main(){
    int n; cin >> n;
    getNum( n , 1);


}