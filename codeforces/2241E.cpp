#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<vector<int>> tree(n, vector<int>());
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        --u; --v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    int ans = 0;
    vector<int> subtree_size(n);

    auto dfs = [&](int u, int p, auto dfs) -> int {
        for (int v : tree[u]) {
            if (v != p) subtree_size[u] += dfs(v, u, dfs);
        }
        int s = ++subtree_size[u], sq = sqrt(a[u]);
        if (sq * sq == a[u]) {
            int sum3 = 0, sum2 = 0, sum1 = 0;
            for (int v : tree[u]) {
                if (v != p) {
                    int x = subtree_size[v];
                    sum3 += sum2 * x;
                    sum2 += sum1 * x;
                    sum1 += x;
                }
            }
            int up_branch_size = n - s;
            sum3 += sum2 * up_branch_size;
            sum2 += sum1 * up_branch_size;
            ans += sum2 + sum3;
        }
        return s;
    };

    dfs(0, -1, dfs);

    cout << ans << '\n';
}

signed main() {
	cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) solve();
}
