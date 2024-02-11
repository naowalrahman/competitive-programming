/**
 * @file B-Langtons_Takahashi.cpp
 * @author Naowal Rahman
 * @date 2024-02-03 07:43
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

void rotate(pii& d, bool clockwise) {
    int x = d.first, y = d.second;
    if(clockwise) d.first = -y, d.second = x;
    else d.first = y, d.second = -x;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int h, w, n;
    cin >> h >> w >> n;
    V<V<char>> grid(h, V<char>(w, '.'));

    int i = 0, j = 0;
    pii d = {0, -1};
    F0R(_, n) {
        if(grid[i][j] == '.') {
            grid[i][j] = '#';
            rotate(d, true);
        }
        else {
            grid[i][j] = '.';
            rotate(d, false);
        }
        i += d.second;
        j += d.first;
        if(i < 0) i = h-1;
        if(j < 0) j = w-1;
        if(i > h-1) i = 0;
        if(j > w-1) j = 0;
    }

    for(V<char> &v : grid) {
        for(char &c : v) cout << c;
        cout << "\n";
    }

    return 0;
}
