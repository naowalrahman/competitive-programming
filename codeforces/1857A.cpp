#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto&x:a) cin >> x;

        int s = accumulate(a.begin(), a.end(), 0);
        cout << (s % 2 == 0 ? "YES" : "NO") << "\n";
    }
    
    return 0;
}