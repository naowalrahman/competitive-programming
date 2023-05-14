/**
 * @file 1643.cpp
 * @author Naowal Rahman
 * @date 2022-10-01 13:40
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n; cin >> n;
    vi arr(n);
    for(auto&x:arr) cin >> x;
    
    ll max_global = INT_MIN, max_local = 0;
    for(int i : arr) {
        max_local += i;
        if(max_global < max_local)
            max_global = max_local;
        if(max_local < 0) max_local = 0;
    }

    cout << max_global;

    return 0;
}