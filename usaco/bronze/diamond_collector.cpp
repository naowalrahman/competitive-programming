#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("diamond.in");
    ofstream cout("diamond.out");

    int n, k; cin >> n >> k;
    vector<int> diamonds(n);
    for(auto&x:diamonds) cin >> x;

    int ans = 0, localAns;
    for(int i = 0; i < n; i++) {
        localAns = 0;
        for(int j = 0; j < n; j++) {
            if(diamonds[j] >= diamonds[i] && diamonds[j] - diamonds[i] <= k) localAns++;
        }
        ans = max(ans, localAns);
    }
    

    cout << ans;

    return 0;
}