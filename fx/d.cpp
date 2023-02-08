#include <bits/stdc++.h>
using namespace std;

bool pow(int n, int a){
    if(a == n) return true;
    if(a > n) return false;
    return pow(n, a*2); 
}
int main(){
    int n;
    cin >> n;
    bool ok = pow(n, 1);
    if(ok) cout << "YES";
    else cout << "NO";
}