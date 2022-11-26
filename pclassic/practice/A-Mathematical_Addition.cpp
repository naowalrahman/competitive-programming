/**
 * @file A-Mathematical_Addition.cpp
 * @author Naowal Rahman
 * @date 2022-11-18 21:19
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

    int t; cin >> t;
    ll u, v;
    while(t--) {
        cin >> u >> v;
        cout << u * u << " " << -v * v << "\n";
    }

    return 0;
}