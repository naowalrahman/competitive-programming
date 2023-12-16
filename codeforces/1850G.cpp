#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int> x, y, pos, neg;
        int px, py;
        while(n--) {
            cin >> px >> py;
            x[px]++;
            y[py]++;
            pos[px-py]++;
            neg[px+py]++;

        }

        int ans = 0;
        for(auto p : x) ans += p.second * (p.second-1); 
        for(auto p : y) ans += p.second * (p.second-1); 
        for(auto p : pos) ans += p.second * (p.second-1);
        for(auto p : neg) ans += p.second * (p.second-1); 

        cout << ans << "\n";
    }
    
    
    return 0;
}