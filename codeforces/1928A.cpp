/**
 * @file 1928A.cpp
 * @author Naowal Rahman
 * @date 2024-02-11 12:50
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        string ans = "no";
        if(a % 2 == 0 && b + a / 2 != a) ans = "yes";
        if(b % 2 == 0 && a + b / 2 != b) ans = "yes";

        cout << ans << "\n";
    }

    return 0;
}
