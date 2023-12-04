/**
 * @author      : Naowal Rahman
 * @created     : 12/01/2023 12:13:35 PM
 * @filename    : 1901B
 */

#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
template<class T> using V = vector<T>;
using vi = V<int>;
using vpi = V<pii>;
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
#define ROF(i, s, e) for(int i = (e)-1; i >= s; i--)
#define ROFE(i, s, e) for(int i = (e); i >= s; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()

void solve() {
    int n; cin >> n;
    vi c(n); for(auto&x:c) cin >> x;
    sort(all(c));

    int teleports = accumulate(all(c), 0), extra = 0;
    for(int i = 0; i < c[n - 1]; i++) {
        teleports += extra * c[i];
        ++extra;
    } 
    cout << teleports << "\n";
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

