/**
 * @author      : Naowal Rahman
 * @created     : 10/04/2023 03:09:45 PM
 * @filename    : GCD_on_Blackboard
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

    int n; cin >> n;
    vi a(n+1), prefix(n+1), suffix(n+2);
    FORE(i, 1, n) cin >> a[i];
    prefix[0] = a[1];
    suffix[n+1] = a[n];

    FORE(i, 1, n) prefix[i] = gcd(prefix[i-1], a[i]);
    ROFE(i, 1, n) suffix[i] = gcd(suffix[i+1], a[i]);

    int ans = 0;
    FORE(i, 1, n) {
        if(i == 1) ans = max(ans, suffix[i+1]);
        else if(i == n) ans = max(ans, prefix[i-1]);
        else ans = max(ans, gcd(prefix[i-1], suffix[i+1]));
    }
    cout << ans;

    return 0;
}

