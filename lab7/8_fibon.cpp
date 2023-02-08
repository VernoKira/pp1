#include <bits/stdc++.h>
using namespace std;
int getFib (int n, int i, int a, int b){
    
    if(i==n) return a;
    return getFib (n, i+1, b, a+b);

}



int main (){
    int n; cin >> n;
    cout << getFib(n , 0, 0, 1) ;


}