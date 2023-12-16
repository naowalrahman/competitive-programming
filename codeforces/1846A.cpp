#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a, b, ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            if(a - b > 0) ans++;
        }

        cout << ans << "\n";
    }
    
    return 0;
}