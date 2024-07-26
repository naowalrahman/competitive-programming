/**
 * @file 1840D.cpp
 * @author Naowal Rahman
 * @date 2024-07-25 22:55
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
    int n; cin >> n;
    vi a(n);
    F0R(i, n) cin >> a[i];

    sort(all(a));
    int lo = -1, hi = 1e9;
    while(hi - lo > 1) {
        int mid = (lo + hi) / 2;
        int i = 0, j = n-1;
        while(i < n && a[i] - a[0] <= 2 * mid) ++i;
        while(j >= 0 && a[n-1] - a[j] <= 2 * mid) --j;
        (i > j || a[j] - a[i] <= 2 * mid ? hi : lo) = mid;
    }

    cout << hi << "\n";
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
