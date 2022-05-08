#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    ll total = n * (n + 1) / 2;

    for(ll i = 0; i < n - 1; i++) {
        ll x; cin >> x;
        total -= x;
    }

    cout << total;

    return 0;
}