#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fr(i, n) for(int i = 0; i < n; i++)

int main(){
     string s;
    cin >> s;
    for(int i=0 ; i< s.size()/2; i++){
    if(s[i]!=s[s.size()-1-i]){
            cout <<"NO";
            return 0;
        }
    }
    cout << "YES";
     
}
