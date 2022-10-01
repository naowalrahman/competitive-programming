/**
 * @file D-Fennce_VS_Snuke.cpp
 * @author Naowal Rahman
 * @date 2022-07-25 22:30
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int ans[2];
vi visited(100010);
vector<vi> graph;

void dfs(int u, int player, int bad) {
    if(u == bad) return;
    ans[player]++;
    visited[u] = 1;
    for(int i : graph[u]) {
        if(!visited[i]) {
            dfs(i, player, bad);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b; cin >> n;
    graph.resize(n+10);
    FOR(i, 0, n-1) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0, n);
    fill(visited.begin(), visited.end(), 0);
    dfs(n, 1, 1);
    
    cout << (ans[0] > ans[1] ? "Fennec" : "Snuke");

    return 0;
}