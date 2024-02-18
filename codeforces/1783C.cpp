/**
 * @file 1783C.cpp
 * @author Naowal Rahman
 * @date 2024-02-18 11:44
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x; cin >> n >> m;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    vector<int> ao(a.begin(), a.end());
    sort(ao.begin(), ao.end());

    int tot = 0, ans = 0;
    for(int i = 0; i < n && tot <= m - ao[i]; i++) {
        tot += ao[i];
        ++ans;
    }

    if(ans > 0 && ans < n && m - tot + ao[ans - 1] >= a[ans]) cout << n - ans;
    else cout << n - ans + 1;
    cout << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
