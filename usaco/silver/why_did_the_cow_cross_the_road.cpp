#include <bits/stdc++.h>
using namespace std;

signed main() {
    ifstream cin("helpcross.in");
    ofstream cout("helpcross.out");

    int c, n; cin >> c >> n;
    multiset<int> t;
    for(int i = 0; i < c; i++) {
        int x; cin >> x;
        t.insert(x);
    }
    vector<pair<int, int>> cows(n);
    for(auto &p : cows) cin >> p.second >> p.first;
    sort(cows.begin(), cows.end());

    int matches = 0;
    for(int i = 0; i < n; i++) {
        auto itr = t.lower_bound(cows[i].second);
        if(itr != t.end() && *itr <= cows[i].first) {
            ++matches;
            t.erase(itr);
        }
    }

    cout << matches;
}
