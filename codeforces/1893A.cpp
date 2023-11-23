/**
 * @author      : Naowal Rahman
 * @created     : 11/13/2023 04:39:46 PM
 * @filename    : 1893A
 */

#include <bits/stdc++.h>
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
    int n, k; cin >> n >> k;
    k = min(n, k);
    vi b(n); for(auto&x:b) cin >> x;

    int inc = 0;
    while(k--) {
        if(b[n-1-inc] >= 1 && b[n-1-inc] <= n) {
            inc += b[n-1-inc];
            if(inc > n-1) inc -= n;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while(t--) { 
        solve();
    }

    return 0;
}

