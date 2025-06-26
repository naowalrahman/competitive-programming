/**
 * @file 2118B.cpp
 * @author Naowal Rahman
 * @date 2025-06-25 20:49
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << 2 * n - 1 << "\n";
        for (int i = 1; i < n; i++) {
            cout << i << " 1 " << i << "\n";
            cout << i << " " << i + 1 << " " << n << "\n";
        }
        cout << n << " 1 " << n << "\n";
    }

    return 0;
}
