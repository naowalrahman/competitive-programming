#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if(n < 4 || n % 2 != 0) cout << -1 << "\n";
        else {
            cout << n / 6 + (n % 6 != 0) << " "
            << n / 4 << "\n";
        }
    }

    return 0;
}