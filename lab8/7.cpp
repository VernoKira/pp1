#include <bits/stdc++.h>

using namespace std;

bool isprime(int x){
    for(int i = 2; i < sqrt(x);i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(isprime(v[i]) && v[i] > k){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}