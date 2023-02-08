#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a; cin >> a;
    for(int i=0; i<v.size(); i++){
        if(find(v.begin(), v.end(), a) != v.end()){
      cout << "Yes";
      return 0;
   }
   }
    cout <<"No";
} 