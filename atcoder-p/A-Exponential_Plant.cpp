/**
 * @file A-Exponential_Plant.cpp
 * @author Naowal Rahman
 * @date 2024-05-18 08:29
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int h; cin >> h;
    int cur = 0, ans = 0;
    while(cur <= h) cur += 1 << ans++;
    cout << ans;

    return 0;
}
