/**
 * @file 1955B.cpp
 * @author Naowal Rahman
 * @date 2024-04-08 10:40
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
    int n, c, d; // c is for col, d is for row
    cin >> n >> c >> d;
    multiset<int> a;
    F0R(i, n) F0R(j, n) {
        int x; cin >> x;
        a.insert(x);
    }
    
    int start = *a.begin();
    int start2 = start;
    F0R(i, n) {
        F0R(j, n) {
            if(i == 0 && j == 0) continue;

            multiset<int>::iterator itr; 
            if(j == 0) {
                start += c;
                start2 = start;
                itr = a.find(start);
            }
            else {
                start2 += d;
                itr = a.find(start2);
            }
            if(itr == a.end()) {
                cout << "NO\n";
                return;
            }
            a.erase(itr);
        } 
    }

    cout << "YES\n";
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
