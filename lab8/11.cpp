#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    vector <int> v;
    for(int i=0 ; i<n; i++){
        int x; cin>>x;
        v.push_back (x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
   int a; cin >>a;
    
    vector <int> :: iterator it;
   int sum=0;
    for(it= v.begin(); it < v.begin()+a; ++it){
 
    
    sum+=*it;
   

    } cout << sum;

}