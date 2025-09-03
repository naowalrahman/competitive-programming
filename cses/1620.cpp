/**
 * @file 1620.cpp
 * @author Naowal Rahman
 * @date 2025-08-24 12:37
 */
#include <bits/stdc++.h>
using namespace std;

#define int long long

int first_true(int lo, int hi, function<bool(int)> f) {
    ++hi;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (f(mid)) hi = mid;
        else lo = mid + 1;
    }
    return hi;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n_machines, n_products;
    cin >> n_machines >> n_products;
    vector<int> times(n_machines);
    for (int& k : times) cin >> k;

    auto is_time_feasible = [&](int t) -> bool {
        int max_products = 0;
        for (int k : times) max_products += t / k;
        return max_products >= n_products;
    };

    cout << first_true(0, times.back() * n_products, is_time_feasible);

    return 0;
}
