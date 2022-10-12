#include <bits/stdc++.h>
using namespace std;
#define vll vector<long long>
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vll v(n);
    for(auto& x : v) cin >> x;

    ll ans = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] < v[i - 1]) {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << ans;

    return 0;
}