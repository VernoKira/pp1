#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set <int> s;
    for(int i=0;i<n ; i++){
        int x; cin>>x;
        s.insert(x);
    }
    int sum=0;
    set<int> :: iterator is;
    for(is=s.begin(); is!=s.end(); ++is){
        sum+=*is;
    }
    cout <<sum;
    
    
    
    
    
    }