#include <bits/stdc++.h>
using namespace std;
#define sz(x)(x).size()

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, T, m; cin >> n >> T >> m;
    vector<int> a(m), b(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }


    int ans = 0;
    vector<int> team(n);
    auto dfs = [&](int u, int ct, auto&& dfs) -> void {
        if(u == n) {
            if(ct != T) return;
            for(int i = 0; i < m; i++) {
                if(team[a[i]] == team[b[i]]) return;
            }
            ans++;
            return;
        }

        for(int i = 0; i < min(ct+1, T); i++) {
            team[u] = i;
            dfs(u+1, max(ct, i+1), dfs);
        }
    };
    dfs(0, 0, dfs);

    cout << ans; 
    return 0;
}