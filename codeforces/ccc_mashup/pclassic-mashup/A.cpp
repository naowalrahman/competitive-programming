#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<int> p(n);
    for(auto&x:p) cin >> x;
    
    vector<vector<int>> graph(n, vector<int>());

    int u, v;
    for(int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        --u; --v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // for(auto arr : graph) {
    //     for(int i : arr) cout << i << " ";
    //     cout << "\n";
    // }

    if(n == 1) {
        if(p[0] == 1) cout << "YES";
        else cout << "NO";
        return 0;
    }

    vector<int> max_subtree(n, -1), subtree_size(n);
    auto dfs = [&](int curr, int parent, auto&& dfs) -> int {
        if(graph[curr].size() == 1) {
            if(p[curr] == 1) max_subtree[curr] = 1;
            subtree_size[curr] = 1;
            return p[curr];
        }
        else {
            for(int node : graph[curr]) {
                if(node != parent) {
                    max_subtree[curr] = max(p[curr], dfs(node, curr, dfs));
                    subtree_size[curr] += subtree_size[node];
                }
            }
            ++subtree_size[curr];
            return max_subtree[curr];
        }
    };

    dfs(0, 0, dfs);

    // for(int i : subtree_size) cout << i << " ";
    // cout << "\n";
    for(int i = 0; i < n; i++) {
        cout <<  (max_subtree[i] == p[i] && max_subtree[i] == subtree_size[i] ? "YES" : "NO");
        cout << "\n";
    }
    
    return 0;
}