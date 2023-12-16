#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> c(n+1);
        for(int i = 1; i <= n; i++) cin >> c[i];

        vector<int> max_step(k+1), max2_step(k+1), prev(k+1);
        for(int i = 1; i <= n; i++) {
            int color = c[i];
            int d = i - prev[color] - 1;
            prev[color] = i;

            if(d > max_step[color]) {
                max2_step[color] = max_step[color];
                max_step[color] = d;
            } 
            else if (d > max2_step[color]) max2_step[color] = d;

        }
        for(int color = 1; color <= k; color++) {
            int d = n - prev[color];
            if(d > max_step[color]) {
                max2_step[color] = max_step[color];
                max_step[color] = d;
            } 
            else if (d > max2_step[color]) max2_step[color] = d;
        }

        int ans = INT_MAX;
        for(int i = 1; i <= k; i++) ans = min(ans, max(max_step[i] / 2, max2_step[i]));
        cout << ans << "\n";
    }

    return 0;
}