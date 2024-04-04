/**
 * @file A.cpp
 * @author Naowal Rahman
 * @date 2024-03-09 15:15
 */

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x.size())

int ls(string &a, string &b) {
    int n = sz(a), m = sz(b), ans = 0;
    int dp[n+1][m+1];
    
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(i != 0 && j != 0 && a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                ans = max(ans, dp[i][j]);
            }
            else dp[i][j] = 0;
        }
    }

    return ans;
}

void solve() {
    int n; cin >> n;
    vector<string> s(n);
    for(auto &place : s) cin >> place;

    int dist = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            dist = max(dist, ls(s[i], s[j]));
        }
    }

    cout << dist << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
