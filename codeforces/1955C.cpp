/**
 * @file 1955C.cpp
 * @author Naowal Rahman
 * @date 2024-04-08 11:30
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
    int n, k; cin >> n >> k;
    vi a(n); for(auto&x:a) cin >> x;

    int tot = accumulate(all(a), 0LL);
    if(tot <= k) {
        cout << n << "\n";
        return;
    }
    
    int i = 0, left = 0;
    while(left <= (k + 1) / 2 && i < n) left += a[i++];
    
    int j = 0, right = 0;
    while(right <= k / 2 && j < n) right += a[n-(j++)-1];
    
    cout << i+j-2 << "\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve(); 

    return 0;
}
