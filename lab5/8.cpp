#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fr(i, n) for(int i = 0; i < n; i++)

int main(){  
    string s;
    cin >> s;
    int mainCnt=0;
    
    for(int i = 0; i< s.size() ; i++){
        char c= s[i];
        int cnt=0;
         for(int j = 0; j< s.size() ; j++){
             if (c==s[j]){
                 cnt++;
             }

         }
         if (mainCnt== 0){
            mainCnt = cnt; 
         }
         else {
             if(mainCnt!= cnt){
                 cout << "NO";
                 return 0;
             }
         }
    }
    cout << "YES";
    

}