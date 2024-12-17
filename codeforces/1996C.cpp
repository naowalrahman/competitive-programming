/**
 * @file 1996C.cpp
 * @author Naowal Rahman
 * @date 2024-09-09 16:41
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

vi diff(vi& a, vi& b) {
    vi d(26);
    F0R(i, 26) d[i] = abs(a[i] - b[i]);
    return d;
}

void solve() {
    int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;

    V<vi> pa(n+1, vi(26)), pb(n+1, vi(26));
    FOR(i, 1, n+1) {
        F0R(j, 26) {
            pa[i][j] = pa[i-1][j];
            pb[i][j] = pb[i-1][j];
        }
        ++pa[i][a[i-1] - 'a']; 
        ++pb[i][b[i-1] - 'a']; 
    }

    int l, r;
    while(q--) {
        cin >> l >> r;
        vi da = diff(pa[r], pa[l-1]), db = diff(pb[r], pb[l-1]);
        vi ans = diff(da, db);
        cout << accumulate(ans.begin(), ans.end(), 0LL) / 2 << "\n";
    }
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
