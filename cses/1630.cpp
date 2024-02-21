/**
 * @file 1630.cpp
 * @author Naowal Rahman
 * @date 2024-02-21 14:07
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    vector<pair<int, int>> T(n);
    for(auto &p : T) cin >> p.first >> p.second;
    sort(T.begin(), T.end());

    long long ans = 0, f = 0;
    for(auto &p : T) {
        f += p.first;
        ans += p.second - f;
    }

    cout << ans;

    return 0;
}
