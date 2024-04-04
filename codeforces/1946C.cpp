/**
 * @file 1946C.cpp
 * @author Naowal Rahman
 * @date 2024-03-25 10:40
 */

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "/home/naowal/Desktop/code/competitive-programming/debug.h"
#else
#define dbg(x)
#endif

#define int long long
template<class T> using V = vector<T>;
using vi = V<int>;
using pii = pair<int, int>;
#define sz(x) (int)((x).size())
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)

template<class T> bool ckmin(T& a, const T& b) {
    return b < a ? a = b, 1 : 0; } // set a = min(a,b)
template<class T>  bool ckmax(T& a, const T& b) {
    return a < b ? a = b, 1 : 0; } // set a = max(a,b)

void solve() {
    int n, k, a, b; cin >> n >> k;
    V<vi> adj(n);
    F0R(i, n - 1) {
        cin >> a >> b;
        --a; --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    auto can_form_k = [&](int x) -> bool {
        int cc = 0;
        auto dfs = [&](auto&& dfs, int cur, int parent) -> int {
            int size = 1;
            for(int u : adj[cur]) if(u != parent) size += dfs(dfs, u, cur);
            // handles cutting off edge + starting condition
            if(size >= x && cur != parent) ++cc, size = 0;
            return size;
        };
        int root_cc_size = dfs(dfs, 0, 0);
        return cc + (root_cc_size >= x) > k;
    };

    int lo = 1, hi = 1e5+1, x;
    while(lo <= hi) {
        x = lo + (hi - lo) / 2;
        bool works = can_form_k(x);
        if(works) lo = x + 1;
        else hi = x - 1;
    }

    cout << lo - 1 << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
