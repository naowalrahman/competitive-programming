#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> c(n); for(auto&x:c) cin >> x;
        int ans = c[0] - 1;
        for(int i = 1; i < n; i++) ans += max(0LL, c[i] - c[i - 1]);
        cout << ans << "\n";
    }
}
