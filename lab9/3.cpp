#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    map <int, int> hash;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        hash[a]++;
    }
    int cnt = 0;
    map<int , int> :: iterator it;
    for(it=hash.begin(); it!=hash.end();++it){
        cout <<(*it).first << " " << (*it).second<< " "<< endl;
       // if((*it).second >1) cnt++;
    } 
    
   /* for (auto i : hash) {
        if (i.second > 1) count++; 
    }*/
    cout << cnt;
}