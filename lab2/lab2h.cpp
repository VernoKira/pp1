#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cntE = 0, cntO = 0;
    for(int i = 1; i <= n; i++){
        int x; 
        cin >> x;
        if(x%2 == 0) cntE++;
        else cntO++;
    }
    cout << cntE << " " << cntO;
}