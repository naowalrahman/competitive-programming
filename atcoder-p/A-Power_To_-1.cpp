/**
 * @file ^{-1}.cpp
 * @author Naowal Rahman
 * @date 2022-11-12 18:38
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n, x, curr; cin >> n >> x;
    FOR(i, 0, n) {
        cin >> curr;
        if(curr == x) cout << i + 1;
    }

    return 0;
}