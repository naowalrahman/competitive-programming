#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto&x:a) cin >> x;

    int mn = INT_MAX, mx = INT_MIN;
    for(int i : a) {
        if(i > mx) mx = i;
        if(i < mn) mn = i;
    }

    int ans = 0;
    vector<int> x;
    while(mn != mx) {
        if(mn % 2 == 0) {
            mn /= 2;
            mx /= 2;
            if(ans <= n) x.push_back(0);
        } 
        else {
            mn = (mn + 1) / 2;
            mx = (mx + 1) / 2;
            if(ans <= n) x.push_back(1);
        }
        ++ans;
    }
    cout << ans << "\n";
    if(ans <= n) {
        for(int i : x) cout << i << " ";
        cout << "\n";
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}