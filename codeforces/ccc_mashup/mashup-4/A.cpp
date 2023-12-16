#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto&x:a) cin >> x;

        int min_pos, min_pile = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(a[i] < min_pile) {
                min_pile = a[i];
                min_pos = i;
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(i == min_pos) continue;
            while(a[i] <= k - min_pile) {
                a[i] += min_pile;
                ans++;
            } 
        }

        cout << ans << "\n";
    }
    
    return 0;
}