/**
 * @file 1925C.cpp
 * @author Naowal Rahman
 * @date 2024-01-28 15:19
 */

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "/home/naowal/Desktop/code/competitive-programming/debug.h"
#else
#define dbg(x)
#endif

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

    int t; cin >> t;
    while(t--) {
        int n, k, m; cin >> n >> k >> m;
        string s; cin >> s;

        string counter = "";
        V<bool> found(k, false);
        for(char c : s) {
            found[c - 'a'] = true;
            bool enough = true;
            F0R(i, k) {
                if(!found[i]) {
                    enough = false;
                    break;
                }
            }
            if(enough) {
                counter += c;
                fill(all(found), false);
            }
        }

        if(sz(counter) >= n) cout << "yes";
        else {
            char bad;
            int rem = n - sz(counter);
            F0R(i, k) if(!found[i]) bad = (char)('a' + i);
            F0R(i, rem) counter += bad;
            cout << "no\n" << counter;
        }
        cout << "\n";
    }

    return 0;
}
