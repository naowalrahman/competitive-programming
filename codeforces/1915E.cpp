#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<int> peven(n+1), podd(n+1);
    for(int i = 1; i <= n; i++) {
        peven[i] = peven[i-1];
        podd[i] = podd[i-1];
        if(i % 2 == 0) peven[i] += a[i];
        else podd[i] += a[i];
    }

    string ans = "NO";
    map<int, int> m;
    for(int i = 0; i <= n; i++) m[peven[i] - podd[i]]++;
    for(auto itr = m.begin(); itr != m.end(); ++itr) {
        if(itr->second >= 2) {
            ans = "YES";
            break;
        }
    }

    cout << ans << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}