/**
 * @file C.cpp
 * @author Naowal Rahman
 * @date 2024-01-17 12:31
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
    string s; cin >> s;
    int n = sz(s);
    vi rm;

    int ans = 0, i = 0;
    while(i < n) {
        if(s.substr(i, 9) == "ntarsisus") {
            ++ans;
            rm.push_back(i+6);
            i += 8;
        }
        else if(s.substr(i, 5) == "susus") {
            ++ans;
            rm.push_back(i+2);
            i += 4;
        }
        else if(s.substr(i, 7) == "ntarsis") {
            ++ans;
            rm.push_back(i+3);
            i += 6;
        }
        else if(s.substr(i, 3) == "sus") {
            ++ans;
            rm.push_back(i+1);
            i += 2;
        }
        else ++i;
    }

    cout << ans << "\n";
    for(int x : rm) cout << x << " ";
    cout << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0); 

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
