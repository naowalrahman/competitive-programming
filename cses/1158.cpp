/**
 * @file 1158.cpp
 * @author Naowal Rahman
 * @date 2022-10-19 15:22
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

int price[1000], pages[1000], dp[1001][100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n, x; cin >> n >> x;
    FOR(i, 0, n) cin >> price[i];
    FOR(i, 0, n) cin >> pages[i];

    FORE(i, 1, n) { 
        FORE(j, 0, x) {
            if(j >= price[i-1]) dp[i][j] = max(dp[i-1][j], dp[i-1][j - price[i-1]] + pages[i-1]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    
    cout << dp[n][x];

    return 0;
}