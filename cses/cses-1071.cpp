#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) {
        ll x, y; cin >> x >> y;

        if(x < y) {
            if(y % 2 == 1) {
                ll r = y * y;
                cout << r - x + 1 << nl;
            }
            else {
                ll r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << nl;
            }
        }
        else {
            if(x % 2 == 1) {
                ll r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << nl;
            }
            else {
                ll r = x * x;
                cout << r - y + 1 << nl;
            }
        }
    }

    return 0;
}