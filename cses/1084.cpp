/**
 * @file 1084.cpp
 * @author Naowal Rahman
 * @date 2022-10-01 13:04
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n, m, k; cin >> n >> m >> k;
    vi desired(n); for(auto&x:desired) cin >> x;
    vi apts(m); for(auto&x:apts) cin >> x;

    sort(all(desired)); sort(all(apts));

    int ans = 0, i = 0, j = 0;
    while(i < n && j < m) {
        // toleranced : abs(desired[i] - apts[i]) <= k)
        if(abs(desired[i] - apts[j]) <= k) {
            ans++; i++; j++;
        }
        else if(apts[j] < desired[i] - k) j++;
        else i++;
    }

    cout << ans;

    return 0;
}