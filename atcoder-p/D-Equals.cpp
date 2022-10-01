/**
 * @file D-Equals.cpp
 * @author Naowal Rahman
 * @date 2022-06-20 13:19
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

vector<vi> graph(100005);
vi component(100005, -1);

void dfs(int v, int cn) {
    component[v] = cn;
    for(int u : graph[v]) {
        if(component[u] == -1) dfs(u, cn);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vi p(n+1);
    FORE(i, 1, n) cin >> p[i];
    int x, y;
    FOR(i, 0, m) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int ans = 0, cn = 1;
    FORE(i, 1, n) {
        if(component[i] == -1) dfs(i, cn);
        cn++;
    }
    FORE(i, 1, n) {
        if(component[i] == component[p[i]]) ans++;
    }

    cout << ans;

    return 0;
}