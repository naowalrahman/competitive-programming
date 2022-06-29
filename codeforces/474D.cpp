/**
 * @author      : Naowal Rahman
 * @created     : 06/25/2022 04:35:08 PM
 * @filename    : 474D
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define FOR(i, s, e) for(ll i = s; i < e; i++)
#define FORE(i, s, e) for(ll i = s; i <= e; i++)
int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, k, a, b; cin >> t >> k;
    vi dp(100001);
    dp[0]=1;
    dp[1] = 1 + (k==1);

    FORE(i, 2, 100001) {
        if(i - k < 0) dp[i] = dp[i-1];
        else {
            dp[i] = dp[i-1] + dp[i - k];
            dp[i] %= MOD;
        }
    }

    dp[0]=0;
    FORE(i, 2, 100001) {
        dp[i] = (dp[i-1] + dp[i]) % MOD;

    }

    while(t--) {
        // lengths range from [a,b]
        // dp[i] = dp[i-1] + length / k
        // ans for query [a,b] is sum(a, b)
        // calclator sum with prefix arr
        //cin >> a >> b;
        cin >> a >> b;
        ll ans = dp[b] - dp[a-1];
        ans %= MOD;
        if(ans < 0) ans += MOD;
        cout << ans << "\n";
    }


    return 0;
}

