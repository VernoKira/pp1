#include <iostream>
using namespace std;
int main () {
    int n; cin >> n;
    int even = 0;
    int odd = 0;
    int a;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2==1) odd++;
        else even++;
    }
    cout << even << " " << odd<<endl;
    return 0;
    }
    