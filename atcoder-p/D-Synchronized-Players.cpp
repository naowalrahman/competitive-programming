/**
 * @file D-Synchronized-Players.cpp
 * @author Naowal Rahman
 * @date 2024-02-03 09:05
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
    V<V<char>> grid(n, V<char>(n));
    char c;
    array<int, 4> cur = {-1, -1, -1, -1};
    F0R(i, n) F0R(j, n) {
        cin >> c;
        if(c == 'P') {
            if(cur[0] == -1) cur[0] = i, cur[1] = j;
            else cur[2] = i, cur[3] = j;
        }
        grid[i][j] = c;
    }

    V<vi> moves = {{-1, 0, -1, 0}, {1, 0, 1, 0}, {0, -1, 0, -1}, {0, 1, 0, 1}};
    const int INF = 1e9;
    V<V<V<vi>>> dp(n, V<V<vi>>(n, V<vi>(n, vi(n, INF))));
    dp[cur[0]][cur[1]][cur[2]][cur[3]] = 0;

    queue<array<int, 4>> q;
    q.push(cur);
    while(!q.empty()) {
        auto cur = q.front();
        q.pop();
        for(auto& move : moves) {
            array<int, 4> nxt(cur); 
            F0R(i, 4) nxt[i] += move[i];
            if(nxt[0] < 0 || nxt[1] < 0 || nxt[0] >= n || nxt[1] >= n || grid[nxt[0]][nxt[1]] == '#') nxt[0] = cur[0], nxt[1] = cur[1];
            if(nxt[2] < 0 || nxt[3] < 0 || nxt[2] >= n || nxt[3] >= n || grid[nxt[2]][nxt[3]] == '#') nxt[2] = cur[2], nxt[3] = cur[3];
            
            if(dp[nxt[0]][nxt[1]][nxt[2]][nxt[3]] == INF) {
                dp[nxt[0]][nxt[1]][nxt[2]][nxt[3]] = dp[cur[0]][cur[1]][cur[2]][cur[3]] + 1;
                q.push(nxt);
            }
        } 
    }

    int ans = INF;
    F0R(i, n) F0R(j, n) ans = min(ans, dp[i][j][i][j]);
    cout << (ans == INF ? -1 : ans);

    return 0;
}
