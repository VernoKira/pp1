#include <bits/stdc++.h>
using namespace std;
int getSum (int n, int sum){
    if(n==0) return sum;
    sum+= n%10;
    return getSum(n/10 , sum);
}


int main(){
    int n; cin >> n;
    cout << getSum(n, 0);

}