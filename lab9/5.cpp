#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map <string, int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        numbers[s]++;
    }
    int cnt = 0;
    for (auto i: numbers) {
        if (i.second == 3) cnt++;
    }
    cout << cnt;
}