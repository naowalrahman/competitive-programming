/**
 * @file C-Perfect_Bus.cpp
 * @author Naowal Rahman
 * @date 2024-02-03 07:32
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

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    vi a(n); for(auto &x : a) cin >> x;

    FOR(i, 1, n) a[i] += a[i-1];
    int mn = *min_element(all(a));

    ckmin(mn, 0LL);
    cout << a[n-1] - mn;

    return 0;
}
