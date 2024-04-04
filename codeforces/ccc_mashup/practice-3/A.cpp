/**
 * @file A.cpp
 * @author Naowal Rahman
 * @date 2024-03-11 15:45
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, q; cin >> n >> q;
    vector<int> e(n);
    for(auto &x : e) cin >> x;

    while(q--) {
        int i, j; cin >> i >> j;
        --i; --j;
        if(j < i) swap(i, j);
        int h = max(e[i], e[j]);
        string ans = "yes";
        for(int x = i + 1; x < j; x++) {
            if(e[x] >= h) ans = "no";
        }
        cout << ans << "\n";
    }

    return 0;
}
