#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fr(i, n) for(int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;
    int sumO=0, sumE=0;
    for(int i=0 ; i< s.size(); i++){
        if(i%2==0){
            sumE+= s[i]-'0';
        }
        else {
            sumO+=  s[i]-'0';
        }
    }
    if(sumE==sumO) cout << "YES";
    else cout << "NO";
   
}
