/**
 * @file 1968D.cpp
 * @author Naowal Rahman
 * @date 2024-07-24 12:27
 */

#pragma region
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
#pragma endregion

void solve() {
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    --pb, --ps;
    vi p(n), a(n);
    F0R(i, n) cin >> p[i], --p[i];
    F0R(i, n) cin >> a[i];

    auto final_score = [&](int start_pos) {
        int ans = 0, sum = 0, cur = start_pos;
        F0R(i, min(n, k)) {
            ans = max(ans, sum + (k - i) * a[cur]);
            sum += a[cur];
            cur = p[cur];
        }
        return ans;
    };

    int b = final_score(pb), s = final_score(ps);
    if(b > s) cout << "Bodya";
    else if (b < s) cout << "Sasha";
    else cout << "Draw";
    cout << "\n";
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
