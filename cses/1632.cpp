/**
 * @file 1632.cpp
 * @author Naowal Rahman
 * @date 2024-02-25 12:38
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k; cin >> n >> k;
    vector<pair<int, int>> m(n);
    for(auto &p : m) cin >> p.second >> p.first;
    sort(m.begin(), m.end());

    multiset<int> e;
    for(int i = 0; i < k; i++) e.insert(0);

    int ans = 0;
    for(int i = 0; i < n; i++) {
        auto itr = e.upper_bound(m[i].second);
        if(itr != e.begin()) {
            ++ans;
            e.erase(prev(itr));
            e.insert(m[i].first);
        }
    }

    cout << ans;

    return 0;
}
