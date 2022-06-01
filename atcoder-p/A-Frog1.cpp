#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int recurse(vector<int> &h, int i) {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vi h(n+1);
    for(int i = 1; i <= n; i++) cin >> h[i];
    vi dp(n+1);
    dp[2] = abs(h[2] - h[1]);
    for(int i = 3; i <= n; i++) {
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]),
                    dp[i-2] + abs(h[i] - h[i-2]));
    }
    cout << dp[n];
    return 0;
}