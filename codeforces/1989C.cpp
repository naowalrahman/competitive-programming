/**
 * @file 1989C.cpp
 * @author Naowal Rahman
 * @date 2024-07-05 15:55
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

void solve() {
    int n, x = 0, y = 0; cin >> n;
    vi a(n), b(n);
    int both_neg = 0, both_pos = 0;
    F0R(i, n) cin >> a[i];
    F0R(i, n) cin >> b[i];
    F0R(i, n) {
        if(a[i] > b[i]) x += a[i] == 1;
        else if(a[i] < b[i]) y += b[i] == 1;
        else both_neg += a[i] < 0, both_pos += a[i] > 0;
    }

    // brute force cases where a[i] == b[i]
    // let i be impact on x from those reviews
    // we also know that both_pos - both_neg is the impact on y if x takes none of 
    // those equal-case reviews. So, both_pos - both_neg - i is the impact if x 
    // takes i of those reviews, since taking 1 more review for x is 1 less review 
    // for y. We can just iterate over all such i to get the answer.
    int ans = LLONG_MIN;
    FOR(i, -both_neg, both_pos + 1) ans = max(ans, min(x + i, y + both_pos - both_neg - i));

    cout << ans << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

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
