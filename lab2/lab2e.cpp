#include <iostream>
#include <cmath>
using namespace std;
int main (){
int c=1000;
int cnt=0;
for(int i=1; i<c; i++){
    if(c%7==i){
        cnt++;
    }
    cout << cnt << endl;
}
}