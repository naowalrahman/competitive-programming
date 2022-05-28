#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi box(n);
        for(auto& x : box) cin >> x;
        int mn = *min_element(box.begin(), box.end());
        int ans = 0;
        for(int x : box) ans += x - mn;
        cout << ans << "\n";        
    }

    return 0;
}