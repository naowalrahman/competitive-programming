/**
 * @file 1795C.cpp
 * @author Naowal Rahman
 * @date 2023-03-21 21:37
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
#define int long long
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        vi a(n); for(auto&x:a) cin >> x;
        vi b(n); for(auto&x:b) cin >> x;

        vi bpfx(n+1), ate_max(n+1), ate_rem(n+1);
        partial_sum(all(b), ++bpfx.begin());
        
        // largest j such that bpfx[j]-bpfx[i] <= a[i]
        // => upper_bound-1 of a[i]+bpfx[i] is pointer
        // => -bpfx.begin() - 1 is to get index
        int j;
        for(int i = 0; i < n; i++) {
            j = upper_bound(all(bpfx), a[i] + bpfx[i]) - bpfx.begin() - 1;
            ++ate_max[i];
            --ate_max[j];
            ate_rem[j] += a[i] - (bpfx[j] - bpfx[i]);
        }

        for(int i = 0; i < n; i++) ate_max[i+1] += ate_max[i];

        for(int i = 0; i < n; i++) cout << ate_rem[i] + ate_max[i] * b[i] << " ";
        cout << "\n";
    }

    return 0;
}