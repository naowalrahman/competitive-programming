/**
 * @file 1967A.cpp
 * @author Naowal Rahman
 * @date 2024-08-10 20:45
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
    int n, k;
    cin >> n >> k;

    priority_queue<int, vi, greater<int>> heap;
    int x;
    F0R(_, n) {
        cin >> x;
        heap.push(x);
    }

    while(k > 0) {
        int m = heap.top();
        heap.pop();
        int m2 = heap.top();
        heap.pop();
        
        int bought = min(k, m - m2);
        k -= bought;
        heap.push(m + bought);
        heap.push(m2);
    }

    cout << heap.top() << "\n";
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
