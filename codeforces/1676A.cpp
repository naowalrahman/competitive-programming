#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int i1 = s[0] - '0';
        int i2 = s[1] - '0';
        int i3 = s[2] - '0';
        int i4 = s[3] - '0';
        int i5 = s[4] - '0';
        int i6 = s[5] - '0';
        bool ok = i1 + i2 + i3 == i4 + i5 + i6;
        cout << (ok ? "yes\n" : "no\n");
    }

    return 0;
}