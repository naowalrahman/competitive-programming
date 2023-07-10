#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), ans(m);
    for(auto&x:a) cin >> x;
    for(auto&x:b) cin >> x;

    // use if a & b are not sorted
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    while(i < n || j < m) {
        if(j == m || i < n && a[i] < b[j]) i++;
        else ans[j++] = i;
    }

    for(int x : ans) cout << x << " ";
    return 0;
}
