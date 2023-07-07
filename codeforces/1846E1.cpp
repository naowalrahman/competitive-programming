#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string ans = "NO";
        for(int k = 2; k < 1000; k++) {
            int s = 0;
            int i = 0;
            while(s < n) {
                s += (int)pow(k, i++);    
            }     
            if(s == n && i > 2) {
                ans = "YES";
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}