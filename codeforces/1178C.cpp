/**
 * @file 1178C.cpp
 * @author Naowal Rahman
 * @date 2026-06-29 20:41
 */
#include <iostream>
using namespace std;

#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    const int mod = 998244353;
    int w, h; cin >> w >> h;
    int a = 2, b = w + h, res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    cout << res;

    return 0;
}
