#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, m; cin >> n >> m;
    vector<int> s(n), t(n), c(n), a(m), b(m), p(m), cost(m);
    for(int i = 0; i < n; i++) {
        cin >> s[i] >> t[i] >> c[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> p[i] >> cost[i];
    }

    int min_money = INT_MAX;
    for(int mask = 0; mask < (1 << m); mask++) {
        int curr_cost = 0;
        vector<int> temp_reqs(100);
        for(int r = 0; r < n; r++) {
            for(int v = s[r]; v <= t[r]; v++) 
                temp_reqs[v] = c[r];
        }
        for(int j = 0; j < m; j++) {
            if(mask & (1 << j)) {
                for(int k = a[j]; k <= b[j]; k++) {
                    temp_reqs[k] -= p[j];
                }                
                curr_cost += cost[j];
            }  
        }
        // if all satisfied then min_money = min(min_money, curr_money);
        bool satisfied = true;
        for(int i = 0; i < n; i++) {
                for(int x = s[i]; x <= t[i]; x++) {
                    if(temp_reqs[x] > 0) satisfied = false; 
                }
            }
        if(satisfied) min_money = min(min_money, curr_cost);
    }

    cout << min_money;
}