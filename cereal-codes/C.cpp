#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> p(n);
        for(auto&a:p) cin >> a;
        vector<vector<int>> d(n, vector<int>(n));
        for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> d[i][j];

        vector<vector<int>> dist(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) dist[i].push_back(abs(p[i] - p[j]));
            sort(dist[i].begin(), dist[i].end());
            sort(d[i].begin(), d[i].end());
        }

        vector<int> used(n), ans(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!used[j]) {
                    if(dist[i] == d[j]) {
                        ans[i] = j+1;
                        used[j] = 1;
                        break;
                    }
                }
            }
        }

        for(int x : ans) cout << x << " ";
        cout << "\n";
    }
    
    return 0;
}