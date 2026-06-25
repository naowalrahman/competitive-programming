#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    cin.tie(0)->sync_with_stdio(0);

	int n; cin >> n;
    if (n % 4 == 0 || (n + 1) % 4 == 0) {
        vector<bool> first(n + 1);

        int s = 0, c = 1, half = n * (n + 1) / 4;
        for (int i = n; i > 0; i--) {
            if (s + i >= half) {
                first[half - s] = true;
                break;
            }
            first[i] = true;
            s += i;
            ++c;
        }
        cout << "YES\n" << c << "\n";
        for (int i = 1; i <= n; i++) if(first[i]) cout << i << " ";
        cout << "\n" << n - c << "\n";
        for (int i = 1; i <= n; i++) if (!first[i]) cout << i << " ";
    }
    else cout << "NO";
}
