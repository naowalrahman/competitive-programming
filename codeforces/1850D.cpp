#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto&x:a) cin >> x;
        sort(a.begin(), a.end());

        int ans = 0, L = 0;
        for(int i = 1; i < n; i++) {
            if(a[i] - a[i-1] <= k) L++;
            else L = 0;
            ans = max(ans, L);
        }

        cout << max(n-ans-1, 0) << "\n";
    }

    return 0;
}