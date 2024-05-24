#include <bits/stdc++.h>
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n, -1));
    for(int i = 0; i < n; i++) cin >> a[i][i];

    for(int i = 0; i < n; i++) {
        int j = i, k = i;
        for(int x = 1; x < a[i][i]; x++) {
            if(k - 1 < 0 || a[j][k-1] != -1) a[++j][k] = a[i][i];
            else a[j][--k] = a[i][i];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}
