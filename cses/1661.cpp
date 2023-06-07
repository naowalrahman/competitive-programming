/**
 * @file 1661.cpp
 * @author Naowal Rahman
 * @date 2023-06-07 15:28
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for(auto &a : arr) cin >> a;

    int sum = 0, ans = 0;
    map<int, int> mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        ans += mp[sum - x];
        mp[sum]++;
    }

    cout << ans;
}