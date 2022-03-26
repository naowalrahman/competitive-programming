// work in progress
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > graph(1e5 + 5);
vector<bool> visited(1e5 + 5, false);
vector<int> parent_list(1e5+5);

int dfs(int v, int target, char t, string node_types, int parent) {
    visited[v] = true;

    for(int u : graph[v]) {
        if(u != parent) {
            if(u == target) {
                if(node_types[u] == t) {
                    return 1;
                }
                dfs(u, target, t, node_types, v);
                return 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    string node_types; cin >> node_types;
    for(int i = 0; i < n - 1; i++) {
        int parent, current; cin >> parent >> current;
        graph[parent].push_back(current);
        graph[current].push_back(parent);
        parent_list[current] = parent;
    }

    for(int i = 0; i < m; i++) {
        int start, end; char t; cin >> start >> end >> t;
        cout << dfs(start, end, t, node_types, parent_list[end]) << "\n";
    }

    return 0;
}