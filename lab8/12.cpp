#include <bits/stdc++.h>
using namespace std;


/*void solve(){
   int n;
   cin >> n;
  set<int> s;
   for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      s.insert(x);
   }
   /*set<int> :: iterator is;
   for(is=us.begin(); is!=us.end(); ++is){
      cout <<*is<<" ";
   }
   for(int i=0; i<n; i++){
      cout <<s[n-1];

   }
   
}    

int main(){
  solve();
}*/
int main(){
   int n;cin >>n;
   set <int> v;
   for(int i=0; i<n; i++){
      int x; cin >>x;
      v.insert (x);
   }
   cout <<v.size();
   

   }
