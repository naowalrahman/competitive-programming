/**
 * @file 1993A.cpp
 * @author Naowal Rahman
 * @date 2024-08-16 16:41
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        string L = "ABCD";
        vector<int> cnt(4);
        for(int i = 0; i < 4; i++) cnt[i] = count(s.begin(), s.end(), L[i]);

        int ans = 0;
        for(int i = 0; i < 4; i++) ans += min(n, cnt[i]);
        cout << ans << "\n";
    }

    return 0;
}
