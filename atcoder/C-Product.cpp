#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
long long n, x;
vector<vector<int> > locations;

void dfs(long long position, long long currProduct) {
    if(position == n) {
        if(currProduct == x) ans++;
        return;
    }
    for(long long a : locations[position]) {
        if(currProduct > x / a) continue;
        dfs(position + 1, currProduct * a);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> x;
    locations.resize(n);
    for(long long i = 0; i < n; i++) {
        long long L; cin >> L;
        locations[i].resize(L); 
        for(long long j = 0; j < L; j++) cin >> locations[i][j];
    } 

    dfs(0, 1);
    cout << ans; 

    return 0;
}