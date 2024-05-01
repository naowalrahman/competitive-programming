/**
 * @file 1969A.cpp
 * @author Naowal Rahman
 * @date 2024-04-30 22:01
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n);
    for(int &x : p) cin >> x, --x;

    int ans = 3;
    for(int i = 0; i < n; i++) if(p[p[i]] == i) ans = 2;
    cout << ans << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
