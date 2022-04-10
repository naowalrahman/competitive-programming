#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll q; cin >> q;
    queue<pair<ll, ll> > a;

    for(ll i = 0; i < q; i++) {
        ll d; cin >> d;
        
        if(d == 1) {
            ll x, c; cin >> x >> c;
            // count is c, actual num is x
            a.push(pair<ll, ll>(x, c));
        }
        else {
            ll c; cin >> c;
            ll sum = 0;
            while(c) {
                if(a.front().second == 0) {
                    a.pop();
                    continue;
                }
                ll mn = min(c, a.front().second);
                c -= mn;
                a.front().second -= mn;

                sum += a.front().first * mn;
            }
            cout << sum << "\n";
        }

    }    
}