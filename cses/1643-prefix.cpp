#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(auto&x:a) cin >> x;

    vector<ll> prefix(n+1);
    partial_sum(a.begin(), a.end(), prefix.begin()+1);

    ll minLeft = 0, globalMax = prefix[1];
    for(int i = 1; i <= n; i++) {
        globalMax = max(globalMax, prefix[i] - minLeft);
        minLeft = min(minLeft, prefix[i]);
    }

    cout << globalMax << "\n";
    
    return 0;
}