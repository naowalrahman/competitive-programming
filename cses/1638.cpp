/**
 * @file 1638.cpp
 * @author Naowal Rahman
 * @date 2022-10-12 16:05
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}

const int MOD = 1e9+7;
char grid[1002][1002];
int dp[1002][1002];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n; cin >> n;
    FORE(i, 1, n) FORE(j, 1, n) {
        cin >> grid[i][j];
    }

    if(grid[1][1] == '*') dp[1][1] = 0;
    else dp[1][1] = 1;
    FORE(i, 2, n) {
        if(grid[1][i] != '*') dp[1][i] = dp[1][i-1];
        if(grid[i][1] != '*') dp[i][1] = dp[i-1][1];
    }
    
    FORE(i, 2, n) {
        FORE(j, 2, n) {
            if(grid[i][j] != '*') {
                dp[i][j] =  dp[i-1][j] + dp[i][j-1];
                dp[i][j] %= MOD;
            }
            else 
                dp[i][j] = 0;
        }
    }

    cout << dp[n][n];

    return 0;
}