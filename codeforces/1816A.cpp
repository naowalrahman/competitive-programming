/**
 * @file 1816A.cpp
 * @author Naowal Rahman
 * @date 2023-04-09 10:57
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

    int t, a, b, mx, mn; cin >> t;
    while(t--) {
        cin >> a >> b;
        cout << 2 << "\n" << 1 << " " << b-1
                  << "\n" << a << " " << b << "\n";
    }

    return 0;
}