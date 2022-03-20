#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; 

    while(t--) {
        int minimum = 1e9 + 1;
        int unsortable = 0;
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
            minimum = min(minimum, a[i]);
        }

        sort(b.begin(), b.end());

        for(int i = 0; i < n; i++) {
            if(a[i] != b[i] && a[i] % minimum > 0) {
                unsortable = 1;
            }
        }

        if(unsortable) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}