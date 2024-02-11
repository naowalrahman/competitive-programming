/**
 * @file 1925B.cpp
 * @author Naowal Rahman
 * @date 2024-01-27 21:07
 */

#include <bits/stdc++.h>
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int x, n; cin >> x >> n;

        set<int> factors = {1, x};
        for(int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                factors.insert(i);
                factors.insert(x / i);
            }
        }

        int ans = 0;
        for(int f : factors) {
            if(x / f >= n) ans = f;
        }

        cout << ans << "\n";
    }

    return 0;
}
