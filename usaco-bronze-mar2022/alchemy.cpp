#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // input/output stuff
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int k; cin >> k;
    vector<int> metals; 
    for(int i = 0; i < k; i++) {
        int l, m; cin >> l >> m; 
        int tmp;
        for(int j = 0; j < m; j++) {
            cin >> tmp; metals.push_back(tmp);
        }
    }

    return 0;
}