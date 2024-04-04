/**
 * @file B.cpp
 * @author Naowal Rahman
 * @date 2024-03-11 15:52
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0; cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
        if(x == i + 1) ++cnt;
    }

    int ans = (int)ceil((double)cnt / 2);
    if(ans >= s.size()) cout << -1; 
    else cout << ans;
    cout << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
