/**
 * @file ntarsis_and_mail_delivery.cpp
 * @author Naowal Rahman
 * @date 2023-10-16 16:08
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef vector<int> vi;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vi a(n); 
    for(auto&x : a) cin >> x;

    vi prefix(n+1);
    partial_sum(all(a), prefix.begin()+1);

    while(m--) {
        int room; cin >> room;
        int dorm = lower_bound(all(prefix), room) - prefix.begin();
        cout << dorm
             << " " 
             << room - prefix[dorm-1]
             << "\n";
    }

    return 0;
}