#include <bits/stdc++.h>
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        if(k > 28) {
            cout << 0 << "\n";
            continue;
        }

        int x = 1, y = 1;
        for(int i = 4; i <= k; i++) {
            int tx = x;
            x = y;
            y += tx;
        }

        int ans = 0;
        for(int i = 0; i <= n / x; i++) {
            int rem = n - x * i;
            if(rem >= 0 && rem % y == 0 && rem / y >= i) ans++;
        }

        cout << ans << "\n";
    }
    
    return 0;
}