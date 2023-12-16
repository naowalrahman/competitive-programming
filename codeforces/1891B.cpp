/**
 * @author      : Naowal Rahman
 * @created     : 11/09/2023 05:48:14 PM
 * @filename    : 1891B
 */

#include <bits/stdc++.h>
#include <algorithm>
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

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vi a(n), x = {31};
        for(auto&i:a) cin >> i;
        int temp;
        FOR(i, 0, q) {
            cin >> temp;
            if(temp < x.back()) x.push_back(temp);
        }

        FOR(i, 0, n) {
            FOR(j, 0, sz(x)) {
                if(a[i] % (1 << x[j]) == 0) {
                    a[i] += 1 << (x[j] - 1);
                } 
            }
        }

        for(int i : a) cout << i << " ";
        cout << "\n";
    }


    return 0;
}
