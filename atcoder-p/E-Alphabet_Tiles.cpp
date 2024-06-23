/**
 * @file E-Alphabet_Tiles.cpp
 * @author Naowal Rahman
 * @date 2024-06-23 14:54
 */

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#ifndef ONLINE_JUDGE
#include "/home/naowal/Desktop/code/competitive-programming/debug.h"
#else
#define dbg(x)
#define timer()
#endif

#define int long long
template<class T> using V = vector<T>;
using vi = V<int>;
using pii = pair<int, int>;
#define first f
#define second s
#define sz(x) (int)((x).size())
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    constexpr int mod = 998244353;

    // precompute binomial coefficients with Pascal's triangle
    V<vi> C(1001, vi(1001));
    F0R(n, 1001) C[n][0] = 1, C[n][n] = 1;
    FOR(n, 1, 1001) FOR(k, 1, 1001) C[n][k] = (C[n-1][k-1] + C[n-1][k]) % mod;

    int K; cin >> K;
    vi f(26);
    F0R(i, 26) cin >> f[i];

    V<vi> dp(27, vi(K+1));
    dp[0][0] = 1;
    F0R(i, 26) F0R(j, K+1) F0R(k, min(j, f[i])+1) {
        dp[i+1][j] += dp[i][j-k] * C[j][k] % mod;
        dp[i+1][j] %= mod;
    }

    int ans = 0;
    FOR(j, 1, K+1) ans += dp[26][j], ans %= mod;
    cout << ans;

    timer();
    return 0;
}

/* stuff you should look for
   -------------------------
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
*/
