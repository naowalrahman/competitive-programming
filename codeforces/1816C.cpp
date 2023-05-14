/**
 * @file 1816C.cpp
 * @author Naowal Rahman
 * @date 2023-04-09 12:47
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

    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        vi arr(n);
        for(auto&x:arr) cin >> x;
    }

    return 0;
}