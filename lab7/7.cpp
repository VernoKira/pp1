#include <bits/stdc++.h>
using namespace std;


int fact(int n, int sum){
    if(n == 0) return sum;
    sum *= n;
    return fact(--n, sum);
}

int main(){
    int n;
    cin >> n;
    cout << fact(n, 1);
} 