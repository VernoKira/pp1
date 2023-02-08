/*#include <bits/stdc++.h>
using namespace std;
int main (){
int n; cin >>n;
int x;
vector<int> v;
for(int i=0; i<n; i++){
    cin >> x;
    v.push_back (x);
}
int a, b; 
cin >> a >>b;
reverse(v.begin()+a, v.end()+b+1);

for(int i=0; i<n; i++){
    cout << v[i] << " ";
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
   int a, b;
   cin >> a >> b;
   reverse(v.begin()+a, v.begin()+b+1);
   for(int i = 0; i < n; i++) {cout << v[i] << " ";
}    
}

int main(){
  solve();
}

