/**
 * @file 1993B.cpp
 * @author Naowal Rahman
 * @date 2024-08-21 08:50
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin(), a.end());

        int mx_odd = 0, mx_even = 0, even = 0;
        for(int x : a) {
            if(x % 2 == 1) mx_odd = max(mx_odd, x);
            else mx_even = max(mx_even, x), ++even;
        }
        
        int ans = 0;
        for(int x : a) {
            if(x % 2 == 0) {
                if(x > mx_odd) ++ans, mx_odd += mx_even;
                mx_odd += x;
                ++ans;
            }
        }

        cout << (even == n ? 0 : ans) << "\n";
    }

    return 0;
}
