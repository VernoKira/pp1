#include <bits/stdc++.h>
using namespace std;


int getMax(string s, int mx, int i){
    if(i == s.size()) return mx;
    mx = max(mx, s[i]-'0');
    return getMax(s, mx, ++i);
}

int main(){
    string s;
    cin >> s;
    cout << getMax(s, s[0]-'0', 0);
}