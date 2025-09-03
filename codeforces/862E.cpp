/**
 * @file 862E.cpp
 * @author Naowal Rahman
 * @date 2025-09-03 08:15
 */
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, q;
    cin >> n >> m >> q;
    
    vector<int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    int constant = 0;
    for (int i = 0; i < n; i++) constant += (i % 2 ? -1 : 1) * a[i];

    int sign = n % 2 ? 1 : -1;
    vector<int> bij(m - n + 1);
    for (int i = 0; i < n; i++) bij[0] += (i % 2 ? -1 : 1) * b[i];
    for (int i = 1; i <= m - n; i++) bij[i] = -(bij[i - 1] - b[i - 1]) + sign * b[n + i - 1];

    sort(bij.begin(), bij.end());

    auto itr = lower_bound(bij.begin(), bij.end(), constant); 
    int c1 = itr == bij.end() ? bij.back() : *itr;
    int c2 = itr == bij.begin() ? LLONG_MAX : *prev(itr);

    cout << min(abs(constant - c1), abs(constant - c2)) << "\n";

    int l, r, x;
    while(q--) {
        cin >> l >> r >> x;
        --l; --r; // even = add, odd = subtract

        if (l % 2 == 0 && r % 2 == 0) constant += x;
        else if (l % 2 == 1 && r % 2 == 1) constant -= x;

        auto itr = lower_bound(bij.begin(), bij.end(), constant);
        int c1 = itr == bij.end() ? bij.back() : *itr;
        int c2 = itr == bij.begin() ? LLONG_MAX : *prev(itr);

        cout << min(abs(constant - c1), abs(constant - c2)) << "\n";
    }

    return 0;
}
