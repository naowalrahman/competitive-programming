#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    int counter0 = 0, counter1 = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') counter0++;
        else counter1++;
    }

    cout << n - min(counter0, counter1) * 2;

    return 0;
}