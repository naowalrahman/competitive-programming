#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        size_t n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        string s; cin >> s;
        int q; cin >> q;
        
        vector<int> xp(n + 1);
        for (size_t i = 1; i <= n; i++) xp[i] = xp[i - 1] ^ a[i - 1];

        int zero_xor = 0, one_xor = 0;
        for (size_t i = 0; i < n; i++) {
            if (s[i] == '0') zero_xor ^= a[i];
            else one_xor ^= a[i];
        }

        while(q--) {
            int tp; cin >> tp;
            if (tp == 1) {
                size_t l, r; cin >> l >> r;
                int x = xp[r] ^ xp[l - 1];
                zero_xor ^= x;
                one_xor ^= x;
            }
            else {
                int g; cin >> g;
                if (g == 0) cout << zero_xor;
                else cout << one_xor;
                cout << " ";
            }
        }
        cout << "\n";
    }
}
