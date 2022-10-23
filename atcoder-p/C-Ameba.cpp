/**
 * @file C-Ameba.cpp
 * @author Naowal Rahman
 * @date 2022-10-22 22:21
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}


int ans[400020];
void dfs(vector<vi>& graph, vector<bool>& visited, int u, int depth) {
    visited[u] = true;
    ans[u] = depth;
    for(int i : graph[u]) {
        if(!visited[i]) dfs(graph, visited, i, depth+1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n; cin >> n;
    vi a(n+1);
    FORE(i, 1, n) cin >> a[i];

    vector<vi> graph(2 * n + 20);
    int x;
    FORE(i, 1, n) {
        x = a[i]; 
        graph[x].push_back(2 * i);
        graph[x].push_back(2 * i + 1);
        graph[2 * i].push_back(x);
        graph[2 * i + 1].push_back(x);
    }

    vector<bool> visited(2 * n + 20);
    dfs(graph, visited, 1, 0);
    FORE(i, 1, 2 * n + 1) cout << ans[i] << "\n";

    return 0;
}