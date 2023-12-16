#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int length, quality, ans, prev = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> length >> quality;
            if(length <= 10 && quality > prev) {
                prev = quality;
                ans = i+1;
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}