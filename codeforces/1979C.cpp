/**
 * @file 1979C.cpp
 * @author Naowal Rahman
 * @date 2024-06-06 11:19
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

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi k(n); for(int& x: k) cin >> x;

        // condition: sum of all 1/k[i] < 1
        // because sum of all S/k[i] < S
        int L = 1;
        for(int i : k) L = L * i / __gcd(L, i);
        
        // compute sum of all L/[i] (integer)
        // and compare with L (eq. to above)
        int num = 0;
        for(int i : k) num += L / i;
        if(num < L) for(int i : k) cout << L / i << " ";
        else cout << -1;
        cout << "\n";
    }

    return 0;
}
