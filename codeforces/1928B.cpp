/**
 * @file 1928B.cpp
 * @author Naowal Rahman
 * @date 2024-02-11 13:07
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    arr.resize(unique(arr.begin(), arr.end()) - arr.begin());

    int ans = 0;
    for(int i = 0; i < (int)arr.size(); i++) {
        int amt = (int)(arr.begin() + i - lower_bound(arr.begin(), arr.end(), arr[i] - n + 1));
        ans = max(ans, amt + 1);
    }

    cout << ans << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
