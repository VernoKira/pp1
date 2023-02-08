#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector <int> odd;
    vector <int> even;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) even.push_back(a);
        else odd.push_back(a);
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end());
    copy(even.begin(), even.end(), ostream_iterator<int>(cout, " "));
    copy(odd.begin(), odd.end(), ostream_iterator<int>(cout, " "));
}