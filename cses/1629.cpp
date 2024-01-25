#include <bits/stdc++.h> 
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<pair<int, int>> times(n);
    for(auto &t : times) cin >> t.second >> t.first;
    sort(times.begin(), times.end());

    int last_end = -1, ans = 0;
    for(auto t : times) {
        if(t.second >= last_end) {
            ++ans;
            last_end = t.first;
        }
    }

    cout << ans;
}
