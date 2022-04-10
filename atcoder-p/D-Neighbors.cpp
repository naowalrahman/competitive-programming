#include <bits/stdc++.h>
using namespace std;
 
string ans = "Yes";
 
int dfs(int u, int p, vector<vector<int> > &graph, vector<int> &vis) {
    vis[u] = 1;
    for(int e : graph[u]) {
        if(e != p) {
            if(vis[e] == 1) {
                ans = "No";
                return 0;
            }
            dfs(e, u, graph, vis);
        }
    }
    return 0;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m; cin >> n >> m;
    vector<int> d(n);
    vector<vector<int> > graph(n);
    vector<int> vis(n);
 
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
        d[a]++;
        d[b]++;
    }
 
    for(int i = 0; i < n; i++) {
        if(d[i] > 2) {
            cout << "No";
            return 0;
        }
    }

    for(int i = 0; i < n; i++) {
        if(vis[i] == 1) {
            continue;
        }
        dfs(i, -1, graph, vis);
    }

    cout << ans;
    return 0;
}