#include <bits/stdc++.h>
using namespace std;

bool isDegree(int n, int sum){
    if(sum == n) return true;
    if(sum > n) return false;
    return isDegree(n, sum*2); 
}
int main(){
    int n;
    cin >> n;
    bool ok = isDegree(n, 1);
    if(ok) cout << "Yes";
    else cout << "No";
}