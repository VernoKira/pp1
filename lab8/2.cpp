/*#include <bits/stdc++.h>
using namespace std;
int main (){
int n; cin >> n;
int x;
vector <int> v;
for(int i=0; i<n; i++){
    cin >> x;
    v.push_back(x);
}
sort(v.begin(), v.end ());
vector <int> :: iterator it;
for(it = v.begin(); it!=v.end(); ++it){
    cout <<*it << " ";
}



    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin >> n;
   vector<int> v;
   for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      v.push_back(x);
   }
   reverse(v.begin(), v.end());
   for(int i = 0; i < n; i++) cout << v[i] << " ";
}    



int main(){
  solve();
}

