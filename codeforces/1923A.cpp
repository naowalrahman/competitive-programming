/**
 * @file 1923A.cpp
 * @author Naowal Rahman
 * @date 2024-02-24 09:45
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto&x:a) cin >> x;
        
        int l = 0, r = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) {
                l = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
            if(a[i] == 1) {
                r = i;
                break;
            }
        }

        int ans = 0;
        for(int i = l; i <= r; i++) ans += a[i] == 0;

        cout << ans << "\n";
    }

    return 0;
}
