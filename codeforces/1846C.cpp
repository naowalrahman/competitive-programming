#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, m, h; cin >> n >> m >> h;
        vector<vector<int>> times(n, vector<int>(m));
        vector<pair<int, int>> results(n);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> times[i][j];
            }
        }
        
        for(int i = 0; i < n; i++) {
            sort(times[i].begin(), times[i].end());
            vector<int> pfx(m);
            partial_sum(times[i].begin(), times[i].end(), pfx.begin());
            int points = 0, penalty = 0, tsf = 0;
            for(int j = 0; j < m; j++) {
                if(tsf + times[i][j] > h) continue;
                points++;
                penalty += pfx[j];
                tsf += times[i][j];
            }
            results[i] = {points, penalty};
        }

        auto rudolph = results[0];
        sort(results.begin(), results.end(), [](pair<int, int> a, pair<int, int> b) -> bool {
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });

        for(int i = 0; i < n; i++) {
            if(results[i].first == rudolph.first && results[i].second == rudolph.second) {
                cout << i+1 << "\n";
                break;
            }
        }
    }
    
    return 0;
}