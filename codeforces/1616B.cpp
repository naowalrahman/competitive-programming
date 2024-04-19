#include <bits/stdc++.h>
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        string ans = "";
        ans += s[0];
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1] && i == 1) break;
            if(s[i] > s[i-1]) break;
            ans += s[i];
        }
        
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }    
    
    return 0;
}