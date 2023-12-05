/**
 * @author      : Naowal Rahman
 * @created     : 12/01/2023 12:00:52 PM
 * @filename    : 1901A
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

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vi a(n); 
        for(auto&b:a) cin >> b;
        
        int ans = 0;
        FOR(i, 1, n) ans = max(ans, a[i] - a[i - 1]);
        cout << max({a[0], ans, 2 * (x - a[n - 1])}) << "\n";
    }

    return 0;
}

