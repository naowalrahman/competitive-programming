#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    for(ll i = 1; i <= n; i++) {
        ll m = i * i;
        cout << m * (m - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
    }

    return 0;
}