/**
 * @file 1201C.cpp
 * @author Naowal Rahman
 * @date 2025-08-19 21:57
 */
#include <bits/stdc++.h>
using namespace std;

int search(int lo, int hi, vector<int>& a, function<bool(int)> f) {
    --lo;
    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        if (f(mid)) lo = mid;
        else hi = mid - 1;
    }
    return lo;
} 

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());

    cout << search(a[n / 2], 2e9, a, [&](int x) -> bool {
        int64_t ops = 0;
        for (int i = n / 2; i < n; i++) ops += max(0, x - a[i]);
        return ops <= k;
    });

    return 0;
}
