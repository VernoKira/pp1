#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
     while(n != 0) {
        int i = 0;
        while(1) {
            if((n >> i) & 1 == 1) break;
            i++;
        }
        cout << pow(2, i) << endl;
        cin >> n;
    }
}