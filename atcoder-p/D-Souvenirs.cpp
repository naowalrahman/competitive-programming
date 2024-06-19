/**
 * @file D.cpp
 * @author Naowal Rahman
 * @date 2024-06-18 22:24
 */
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;
    multiset<int> a;
    vector<int> b(m);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.insert(x);
    }
    for(int &x : b) cin >> x;

    int min_money = 0;
    for(int c : b) {
        auto itr = a.lower_bound(c);
        if(itr == a.end()) {
            cout << -1;
            return 0;
        }
        min_money += *itr;
        a.erase(itr);
    }

    cout << min_money;

    return 0;
}
