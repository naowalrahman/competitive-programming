#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	cin.tie(0)->sync_with_stdio(0);
    
    const int m = 1e9 + 7;
    int n, a, b, res; cin >> n; 
    while (n--) {
        cin >> a >> b;
        a %= m;
        res = 1;
        while (b > 0) {
            if (b & 1) res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        cout << res << "\n";
    }
}
