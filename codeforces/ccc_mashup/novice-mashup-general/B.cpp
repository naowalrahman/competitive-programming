/**
 * @file B.cpp
 * @author Naowal Rahman
 * @date 2024-01-17 10:39
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

    int n, k, m, p; 
    cin >> n >> k >> m >> p;
    V<pii> falls(p);
    FOR(i, 0, p) {
        int f, t;
        cin >> falls[i].first;
        cin >> f >> t;
        falls[i].second = f - t;
    }

    sort(all(falls));

    int curr_bones = k;
    FOR(i, 0, p) {
        curr_bones -= falls[i].second;
        if(i != 0) curr_bones += falls[i].first - falls[i-1].first;
        curr_bones = min(curr_bones, k);
        if(curr_bones <= 0) {
            cout << falls[i].first;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
