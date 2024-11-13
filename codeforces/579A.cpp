/**
 * @file template.cpp
 * @author Naowal Rahman
 * @date 2024-06-18 23:59
 */

#include <bits/stdc++.h>
#include <bit>
using namespace std;

#pragma GCC target("popcnt")

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    unsigned int x, ans = 0; cin >> x;
    while (x) {
        x -= bit_floor(x); // need C++20 or higher
        ++ans;
    }
    
    cout << ans;
    
    return 0;
}
