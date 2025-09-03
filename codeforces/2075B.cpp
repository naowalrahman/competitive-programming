/**
 * @file 2075B.cpp
 * @author Naowal Rahman
 * @date 2025-03-20 23:17
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    if(k == 1) {
        auto itr = max_element(a.begin(), a.end());

        if (itr == a.begin()) cout << *itr + *max_element(a.begin() + 1, a.end());
        else if (itr == a.end() - 1) cout << *itr + *max_element(a.begin(), a.end() - 1);
        else cout << *itr + max(a[0], a[n - 1]);
        cout << '\n';
    }
    else {
        sort(a.begin(), a.end(), greater<int>());
        cout << accumulate(a.begin(), a.begin() + k + 1, 0LL) << '\n';
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
