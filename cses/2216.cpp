#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<int> pos(n);
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        pos[--x] = i; 
    }

    int ans = 1;
    for(int i = 1; i < n; i++) if(pos[i] < pos[i-1]) ans++;

    cout << ans;
    
    return 0;
}