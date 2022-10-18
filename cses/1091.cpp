/**
 * @file 1091.cpp
 * @author Naowal Rahman
 * @date 2022-10-18 09:58
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

    int n, m, x; cin >> n >> m;
    multiset<int> prices; 
    FOR(i, 0, n) {
        cin >> x;
        prices.insert(x);
    }

    while(cin >> x) {
        auto it = prices.upper_bound(x);
        if(it == prices.begin()) cout << -1 << "\n";
        else {
            cout << *(--it) << "\n";
            prices.erase(it);
        }
    }

    return 0;
}