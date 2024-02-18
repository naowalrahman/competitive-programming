/**
 * @file 1802D.cpp
 * @author Naowal Rahman
 * @date 2024-02-15 16:45
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> d(n);
    multiset<int> first;
    for(auto &p : d) {
        cin >> p.first >> p.second;
        first.insert(p.first);
    }

    sort(d.begin(), d.end(), [](const auto &a, const auto &b) {
        return a.second > b.second;
    });

    int ans = INT_MAX;
    for(int i = 1; i < n; i++) ans = min(ans, abs(d[0].second - d[i].first));

    int max_left = 0;
    for(int i = 0; i < n; i++) {
        int b = d[i].second;
        first.erase(first.find(d[i].first));
        if(i == 0) {
            max_left = d[i].first;
            continue;
        }

        ans = min(ans, abs(b - max_left));
        auto itr = first.lower_bound(b);
        if(itr != first.end() && *itr > max_left) ans = min(ans, abs(b - *itr));
        if(itr != first.begin() && *prev(itr) > max_left) ans = min(ans, abs(b - *prev(itr)));
        
        max_left = max(max_left, d[i].first);
    }

    cout << ans << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
