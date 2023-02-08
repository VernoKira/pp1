#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fr(i, n) for(int i = 0; i < n; i++)

int main(){  
    string s;
    cin >> s;
   int cnt=0;


   for(int i=0; i<s.size(); i++){
  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
      cnt++;
  }
   
}
cout << cnt;
}