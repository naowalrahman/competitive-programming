/**
 * @author      : Naowal Rahman
 * @created     : 06/25/2022 09:37:38 PM
 * @filename    : 474B
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int (i) = (s); (i) < (e); (i)++)
#define FORE(i, s, e) for(int (i) = (s); (i) <= (e); (i)++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi a(n); 
    for(auto&x:a) cin >> x;
    int m; cin >> m;
    vi juicy(m);
    for(auto&x:juicy) cin >> x;

    map<int, int> mp;
    FORE(i, 1, a[0]) {
        mp[i] = 1;
    }

    int sum = a[0];
    FOR(pn, 1, n) {
        FORE(i, sum+1, sum+a[pn]) {
            mp[i] = pn+1;
        }
        sum += a[pn];
    }


    for(int q : juicy) {
        cout << mp[q] << "\n";
    }

    return 0;
}

