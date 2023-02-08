#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cntB=0, cntS=0;
    for(int i=0 ; i < s.size (); i++){
        if(s[i]>=65 && s[i]<=90){
            cntB++;
        }
        else if(s[i]>=97 && s[i]<=122){
            cntS++;
        }

    }
    cout << cntB << " " << cntS;
}