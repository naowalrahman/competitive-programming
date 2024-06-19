/**
 * @file C.cpp
 * @author Naowal Rahman
 * @date 2024-06-18 22:06
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;
    vector<string> s(n);
    for(string &x : s) cin >> x;

    int min_stands = INT_MAX;
    for(int mask = 0; mask < (1 << n); mask++) {
        vector<bool> good(m, false);
        int n_stands = 0;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                ++n_stands;
                for(int j = 0; j < m; j++) good[j] = good[j] || (s[i][j] == 'o');
            }
        }
        bool all_true = true;
        for(bool x : good) all_true = all_true && x;
        if(all_true) min_stands = min(min_stands, n_stands);
    }

    cout << min_stands;

    return 0;
}
