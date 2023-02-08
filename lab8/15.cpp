
#include <bits/stdc++.h>
using namespace std;

void solve(){
   string s;
   cin >> s;
   set <char> x;
   for(int i = 0; i < s.size(); i++){
     x.insert(tolower(s[i]));
   }
   cout << x.size() << endl;
   set <char> :: iterator is;
   for(is=x.begin(); is!=x.end();++is){
     cout << *is << " ";  
   }
 
      
   }
   

int main(){
  solve();
}