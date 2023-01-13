/**
 * @file 1783A.cpp
 * @author Naowal Rahman
 * @date 2023-01-12 21:09
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

    int t, n, maxe = 0, mine = 101; cin >> t;
    vi a;
    while(t--) {
        cin >> n;
        a.resize(n);
        for(auto&x:a) cin >> x;

        sort(all(a)); 
        swap(a[0], a[1]);
        swap(a[0], a[n-1]);

        if(a[0] == a[1]) cout << "NO\n";
        else {
            cout << "YES\n";
            for(int i : a) cout << i << " ";
            cout << "\n";
        }
    }    

    return 0;
}