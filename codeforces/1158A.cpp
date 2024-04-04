/**
 * @file 1158A.cpp
 * @author Naowal Rahman
 * @date 2024-03-02 19:05
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;
    multiset<pair<int, int>> a;
    vector<int> g(m);

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int mn; cin >> mn;
        ans += mn;
        a.insert({mn, m - 1});
    }
    ans *= m;

    for(auto &x : g) cin >> x;
    sort(g.begin(), g.end());
    
    for(int val : g) {
        auto itr = a.upper_bound({val, 0});
        if(itr == a.begin()) {
            cout << -1;
            return 0;
        }
        itr = prev(itr);
        ans += val - itr->first;
        if(itr->second != 1) a.insert({itr->first, itr->second - 1});
        a.erase(itr);
    }

    cout << ans;

    return 0;
}
