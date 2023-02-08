#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int x;
vector <int> v;

for(int i=0; i<n; i++){
    cin >> x;
    v.push_back (x);
}
int a,b; cin >> a>> b;
v.erase(v.begin()+a, v.begin()+b+1);
vector <int> :: iterator it;
for( it=v.begin() ; it!=v.end(); ++it) { cout << *it<< " ";
}
}