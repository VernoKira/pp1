#include <bits/stdc++.h>
using namespace std;
void getBin(int n){
    if(n ==0) return;
    
    getBin (n/2);
    cout << n%2;

}

int main (){
int n; cin >> n;
getBin (n);
}