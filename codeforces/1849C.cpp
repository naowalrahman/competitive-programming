/**
 * @author      : Naowal Rahman
 * @created     : 07/28/2023 07:06:41 PM
 * @filename    : 1849C
 */

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using ll = long long;
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
        int n, m; cin >> n >> m;
        string s; cin >> s;

        set<pair<int, int>> uniq;
        vi l(n), r(n);
        l[0] = -1;
        r[n-1] = n;
        FOR(i, 0, n) {
            if(i) l[i] = l[i-1];
            if(s[i] == '0') l[i] = i;
        }
        ROF(i, 0, n) {
            if(i < n-1) r[i] = r[i+1];
            if(s[i] == '1') r[i] = i;
        }

        int li, ri;
        FOR(i, 0, m) {
            cin >> li >> ri;
            --li; --ri;
            li = r[li];
            ri = l[ri];
            if(li <= ri) uniq.insert({li, ri});
            else uniq.insert({-1, -1});
        }

        cout << sz(uniq) << "\n";
    }

    return 0;
}

