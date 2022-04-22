#include <bits/stdc++.h>
#include </home/naowal/code/other-files/atcoder/dsu.hpp>
using namespace std;
using namespace atcoder;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    dsu d(n);
    
    for(int i = 0; i < n; i++) {
        int v; cin >> v; 
        v--;
        d.merge(i, v);
    }

    vector<vector<int> > groups = d.groups();
    ll num_cycles = groups.size();

    ll ans = 1;
    for(ll i = 0; i < num_cycles; i++) {
        ans *= 2;
        ans %= 998244353;
    }
    ans--;
    if(ans < 0) ans += 998244353;
    cout << ans;

    return 0;
}