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
int b; cin >> b;
v.erase(v.begin()+b);
for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
}
}

