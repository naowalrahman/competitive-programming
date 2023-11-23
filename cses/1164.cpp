/**
 * @author      : Naowal Rahman
 * @created     : 07/26/2023 06:42:42 PM
 * @filename    : 1164
 */

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using ll = long long;
using pii = pair<int, int>;
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int n; cin >> n;
    vector<pair<pii, int>> times(n);
    FOR(i, 0, n) {
        cin >> times[i].first.first >> times[i].first.second;
        times[i].second = i;
    }
    
    sort(all(times));

    int k = 0, r = 0;
    vi room(n);
    priority_queue<pii> pq;
    for(auto time : times) {
        if(pq.empty() || -pq.top().first >= time.first.first) {
            pq.push({-time.first.second, ++r});
            room[time.second] = r;
        }
        else {
            auto m = pq.top();
            pq.pop();
            pq.push({-time.first.second, m.second});
            room[time.second] = m.second;
        }
        k = max(k, sz(pq));
    }

    cout << k << "\n";
    for(int i : room) cout << i << " ";
    
    return 0;
}

