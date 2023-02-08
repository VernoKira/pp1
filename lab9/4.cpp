#include <bits/stdc++.h> 
using namespace std;


int main(){
    int n , k;
    cin >> n >>k;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int a;
        cin >>a;
        m[a]++;
    }
    cout << m[k];
}