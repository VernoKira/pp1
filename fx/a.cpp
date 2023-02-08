 #include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b > c and a+c > b and c+b > a) cout << "Valid";
    else cout << "Invalid";
}