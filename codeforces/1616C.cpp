/**
 * @file 1616C.cpp
 * @author Naowal Rahman
 * @date 2024-04-22 11:41
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int ans = n - 1; // worst case
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            double d = ((double)a[j] - a[i]) / (j - i);
            double f = a[i] - d * i;
            int cur = 0;
            for(int k = 0; k < n; k++) {
                if(abs(a[k] - f) > 1e-6) ++cur;
                f += d;
            }
            ans = min(ans, cur);                
        }
    }

    cout << ans << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
