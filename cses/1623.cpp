/**
 * @author      : Naowal Rahman
 * @created     : 01/20/2023 01:09:54 PM
 * @filename    : 1623
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int n;

ll solve(vi &p, int i, ll sum1, ll sum2) {
    if(i == n) return abs(sum1 - sum2);
    return min(solve(p, i+1, sum1+p[i], sum2), 
               solve(p, i+1, sum1, sum2+p[i]));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vi p(n); for(auto&x:p) cin >> x;
    cout << solve(p, 0, 0, 0);

    return 0;
}

