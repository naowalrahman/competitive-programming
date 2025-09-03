/**
 * @file 1520F1.cpp
 * @author Naowal Rahman
 * @date 2025-08-31 08:08
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k; cin >> n >> t >> k; // t = 1 always for problem F1

    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        cout << "? " << 1 << " " << mid << "\n";
        cout.flush();
        int sum; cin >> sum;
        if (mid - sum == -1) return 0;
        if (mid - sum >= k) hi = mid;
        else lo = mid + 1;
    }

    cout << "! " << hi << "\n";
    cout.flush();

    return 0;
}
