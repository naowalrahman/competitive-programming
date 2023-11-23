/**
 * @author      : Naowal Rahman
 * @created     : 07/28/2023 06:50:32 PM
 * @filename    : 1849B
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

    int t; cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k;
        vi zeroes;
        vector<pii> nzeroes;
        FOR(i, 0, n) {
            cin >> x;
            x %= k;
            if(x) nzeroes.push_back({x, i+1});
            else zeroes.push_back(i+1);
        }

        sort(all(zeroes));
        sort(all(nzeroes), [](pii& p, pii& q) {
            if(p.first == q.first) return p.second < q.second;
            return p.first > q.first; 
        });

        for(int i : zeroes) cout << i << " ";
        for(auto p : nzeroes) cout << p.second << " ";
        cout << "\n";
    }

    return 0;
}

