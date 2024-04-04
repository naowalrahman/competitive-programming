/**
 * @file B.cpp
 * @author Naowal Rahman
 * @date 2024-02-26 17:10
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin >> x;
    int cur = 9;
    string ans = "";
    if(x > 9 * 10 / 2) ans = "1-";
    else {
        while(x > 0) {
            if(x - cur < 0) --cur;
            else {
                ans += to_string(cur);
                x -= cur;
                --cur;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
