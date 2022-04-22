#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void dfs(int u, vector<vector<int> > &graph, vector<bool> &visited) {
    visited[u] = true; 
    ans++;
    for(auto i : graph[u]) {
        if(!visited[i]) 
            dfs(i, graph, visited);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<vector<int> > graph(n);
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
    }
    vector<bool> visited(n, false);

    for(int vx = 0; vx < n; vx++) {
        if(!visited[vx])
            dfs(vx, graph, visited);
        fill(visited.begin(), visited.end(), false);
    }

    cout << ans; 

    return 0;
}