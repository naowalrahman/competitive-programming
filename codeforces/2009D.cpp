/**
 * @file 2009D.cpp
 * @author Naowal Rahman
 * @date 2024-09-11 16:49
 */
#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "/home/naowal/Desktop/code/competitive-programming/debug.h"
#else
#define dbg(x)
#endif

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int, int>> p(n);
        for(auto &x : p) cin >> x.first >> x.second;
        sort(p.begin(), p.end());
        dbg(p);

        int ans = 0;
        for(int i = 1; i < n; i++) ans += (n - 2) * (p[i].first == p[i - 1].first);
        for(int i = 0; i < n; i++) {
            int x1 = p[i].first, y1 = p[i].second;
            int search = y1 == 0;
            for(int j = i + 1; j < min(i + 6, n); j++) {
                if(p[j].second == ) 
            }
            // int x1 = p[i-1].first, x2 = p[i].first, x3 = p[i+1].first;
            // int y1 = p[i-1].second, y2 = p[i].second, y3 = p[i+1].second;
            // if(x1 + 1 == x2 && x1 + 2 == x3 && y1 == y3 && y1 != y2) {
            //     ++ans;
            //     cout << "YES\n";
            // }

        }
        cout << ans << "\n";
    }

    return 0;
}
