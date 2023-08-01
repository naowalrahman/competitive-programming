/**
 * @author      : Naowal Rahman
 * @created     : 07/31/2023 12:21:02 PM
 * @filename    : 104002E
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

    ll n, a, b; cin >> n;
    priority_queue<ll> pq;
    FOR(i, 0, n/2) {
        cin >> a >> b;
        pq.push(-a);
        pq.push(-b);
        pq.pop();
    }

    ll ans = 0;
    while(!pq.empty()) {
        ans += -pq.top();
        pq.pop();
    }

    cout << ans << "\n";

    return 0;
}

