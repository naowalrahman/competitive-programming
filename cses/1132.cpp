#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > adj(2e5);
int dist[2][200000];

int dfs(int u, int p, int d, int i) {
    // p is the previous node
    // keeping track of p eliminates need for visited array
    dist[i][u] = d;
    int optimal = -1;
    for(int v : adj[u]) { 
        if(v != p) {
            int x = dfs(v, u, d + 1, i);
            /*
            For the first branch of the tree, set the optimal 
            value equal to the deepest node in the first branch.
            For succeeding branches of the tree, set the optimal
            value equal to the deepest node of the current branch
            only if it is greater than the previous optimal value.
            */
            if(optimal == -1 || dist[i][x] > dist[i][optimal])
                optimal = x;
        }
    }
    return (optimal == -1 ? u : optimal);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // handling input & creating graph
    int n; cin >> n;
    for(int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b; a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int maxNode1 = dfs(0, 0, 0, 0);
    int maxNode2 = dfs(maxNode1, maxNode1, 0, 0);
    dfs(maxNode2, maxNode2, 0, 1);

    for(int i = 0; i < n; i++) {
        cout << max(dist[0][i], dist[1][i]) << " ";
    }

    return 0;
}