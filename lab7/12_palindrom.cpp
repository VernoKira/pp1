#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string s, int i){
    if(s[i] != s[s.size()-1-i]) return false;
    if(i == s.size()/2) return true;
    return isPalindrom(s, ++i);
}


int main(){
    string s;
    cin >> s;
    bool ok = isPalindrom(s, 0);
    if(ok) cout << "Yes";
    else cout << "No";
}