/**
 * @file 1085.cpp
 * @author Naowal Rahman
 * @date 2025-08-26 01:55
 */
#include <bits/stdc++.h>
using namespace std;

#define int int64_t

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

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    auto is_sum_feasible = [&](int sum) -> bool {
        int j = 0;
        for (int i = 0; i < k - 1; i++) {
            int cur = 0;
            while (j < n && cur + a[j] <= sum) cur += a[j++];
        }

        int last_sum = 0;
        while(j < n) last_sum += a[j++];

        return last_sum <= sum;
    };

    cout << first_true(0, 2e14, is_sum_feasible);

    return 0;
}
