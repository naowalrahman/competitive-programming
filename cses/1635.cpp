/**
 * @file 1635.cpp
 * @author Naowal Rahman
 * @date 2022-10-12 15:32
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
int coin[100], dp[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n, x; cin >> n >> x;
    FOR(i, 0, n) cin >> coin[i];

    dp[0] = 1;
    FORE(i, 1, x) {
        FOR(j, 0, n) {
            if(i >= coin[j]) {
                dp[i] += dp[i - coin[j]];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[x];

    return 0;
}