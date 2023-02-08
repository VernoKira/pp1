#include <bits/stdc++.h>
using namespace std;

int getDegree(int n , int sum){
if(n==0) return sum;
sum*=2;

return getDegree (--n , sum);


}
int main(){
    int n;
    cin >> n;
    cout << getDegree (n, 1) ;

     
}