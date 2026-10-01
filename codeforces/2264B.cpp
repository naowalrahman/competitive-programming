#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        if (m == 1) {
            cout << *max_element(a.begin(), a.end()) << '\n';
        }
        else {
            priority_queue<int> q;
            for (int i = 0; i < m - 1; i++) q.push(a[i]);
            int neg_sum = 0;
            for (int i = 0; i < m - 1; i++) neg_sum -= a[i];
            int max_score = neg_sum + m * a[m - 1];
            for (int last = m; last < n; last++) {
                int prev_max = q.top(), new_insert = a[last - 1];
                if (new_insert < prev_max) {
                    q.pop();
                    q.push(new_insert);
                    neg_sum += prev_max - new_insert;
                }
                max_score = max(max_score, neg_sum + m * a[last]);
            }
            cout << max_score << '\n';
        }
    }
}
