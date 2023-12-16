/**
 * @author      : Naowal Rahman
 * @created     : 03/08/2023 06:16:43 PM
 * @filename    : 1661
 */

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto& x : arr)
        cin >> x;

    map<int, int> mp;
    vector<int> pfx(n + 1);
    partial_sum(arr.begin(), arr.end(), ++pfx.begin());
    for (int num : pfx) {
        mp[num]++;
    }

    int a, ac, ans = 0;
    for (int num : pfx) {
        a = mp[num], ac = mp[x - num];
        if (a && ac)
            ans += min(a, ac);
    }

    cout << ans;

    /*
     *   2 -1 3 5 -2
     * 0 2  1 4 9  7
     */

    return 0;
}
