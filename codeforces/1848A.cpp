#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        int vx, vy, fx, fy;
        cin >> vx >> vy;

        string ans = "YES";
        while(k--) {
            cin >> fx >> fy;
            if((vx+vy) % 2 == (fx+fy) % 2) ans = "NO";
        }

        cout << ans << "\n";
    }
    
    return 0;
}