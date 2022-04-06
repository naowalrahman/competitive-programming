#include <bits/stdc++.h>
using namespace std;

void dfs(int v, vector<bool> &vis, vector<vector<int>> &g) { 
    if(!vis[v]) return;
    vis[v] = false;
    for(auto &nx : g[v]) dfs(nx, vis, g);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> visited(2e5 + 5, false);
    int ans = 0;
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) {
        cin >> val;
        if(!visited[val]) {
            visited[val] = true;
            ans++;
        }
    }

    vector<vector<int> > adj(2e5 + 5);
    int start = 0, end = n - 1;
    while(start < end) {
        adj[a[start]].push_back(a[end]); 
        adj[a[end]].push_back(a[start]); 
        start++; end--;
    }

    for(int i = 1; i <= 2e5; i++) {
        if(visited[i]) {
            ans--;
            dfs(i, visited, adj);
        }
    }

    cout << ans << "\n";

    return 0;
}