#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int n1 = 0;
    int n2 =1;
    for (int i=0 ; i< n ; i++){
        if(i==0){
            cout << n1 << " ";
            
        }
        else if (i==1){
            cout << n2 << " ";
        }
        else {
            int next = n1+n2;
            cout << next << " ";
            n1=n2;
            n2= next;
        }
    }
    return 0;
}