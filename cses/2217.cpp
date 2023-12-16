#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, m; cin >> n >> m;
    vector<int> arr(n+1), pos(n+2);
    pos[n+1] = n+1;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int ans = 1;
    for(int i = 1; i <= n; i++) if(pos[i] < pos[i-1]) ++ans;
    
    int i, j;
    while(m--) {
        cin >> i >> j;
        int a = arr[i], b = arr[j];
        swap(arr[i], arr[j]);

        if(pos[a] < pos[a-1] && j >= pos[a-1]) --ans;
        if(pos[a] >= pos[a-1] && j < pos[a-1]) ++ans;
        if(pos[a+1] < pos[a] && j <= pos[a+1]) --ans;
        if(pos[a+1] >= pos[a] && j > pos[a+1]) ++ans;
        pos[a] = j;

        if(pos[b] < pos[b-1] && i >= pos[b-1]) --ans;
        if(pos[b] >= pos[b-1] && i < pos[b-1]) ++ans;
        if(pos[b+1] < pos[b] && i <= pos[b+1]) --ans;
        if(pos[b+1] >= pos[b] && i > pos[b+1]) ++ans;
        pos[b] = i;

        cout << ans << "\n";
    } 

    return 0;
}