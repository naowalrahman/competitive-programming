#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, ans, mex = 0; cin >> n;
    vector<bool> used(n + 1);
    while(n--) {
        cin >> a;
        if(a >= 0) ans = mex;
        else ans = mex - a;
        used[ans] = true;
        cout << ans << " ";
        while(used[mex]) ++mex;
    }
    cout << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}