/**
 * @file icy_perimeter.cpp
 * @author Naowal Rahman
 * @date 2024-04-04 16:43
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ifstream cin("perimeter.in");
    ofstream cout("perimeter.out");

    int n; cin >> n;
    vector<string> grid(n);
    for(auto& s: grid) cin >> s;
    vector<vector<int>> vis(n, vector<int>(n));
    
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    map<int, int> perim;
    int color = 1;

    auto dfs = [&](auto&& dfs, int i, int j) {
        if(i < 0 || i >= n || j < 0 || j >= n || grid[i][j] == '.') {
            ++perim[color];
            return;
        }
        if(vis[i][j]) return;
        
        vis[i][j] = color;
        for(int d = 0; d < 4; d++) dfs(dfs, i + dx[d], j + dy[d]);
    };

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(vis[i][j] || grid[i][j] == '.') continue;
            dfs(dfs, i, j);
            ++color;
        }
    }

    map<int, int> freq;
    for(auto& a : vis) for(auto& i : a) if(i != 0) ++freq[i];

    int max_area = INT_MIN, min_perim;
    for(auto& p : freq) {
        if(p.second == max_area) min_perim = min(min_perim, perim[p.first]);
        else if(p.second > max_area) {
            max_area = p.second;
            min_perim = perim[p.first];
        }
    }

    cout << max_area << " " << min_perim;
        
    return 0;
}
