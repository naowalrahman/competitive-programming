#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vs words(n);
        for(auto &x : words) cin >> x;

        int main_ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                string w1 = words[i];
                string w2 = words[j];

                int ans = 0;
                for(int k = 0; k < m; k++) {
                    ans += abs(w1[k] - w2[k]);
                }

                main_ans = min(main_ans, ans);
            }
        }

        cout << main_ans << "\n";
    }

    return 0;
}