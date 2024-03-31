#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k; cin >> n >> k;
    if(k == 1) for(int i = 1; i <= n; i++) cout << i << " ";
    else if(k == n) for(int i = 0; i < n; i++) cout << 1 << " ";
    else cout << -1;
    cout << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}