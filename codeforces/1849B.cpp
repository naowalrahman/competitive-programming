/**
 * @file 1849B.cpp
 * @author Naowal Rahman
 * @date 2023-07-27 23:31
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

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

    int t, n, k, x; cin >> t;
    while(t--) {
        cin >> n >> k;
        set<pii, bool (*)(const pii &, const pii &)> a([](const pii& x, const pii& y) {
            if(x.first == y.first) return x.second < y.second;
            else return x.first > y.first;
        });

        FOR(i, 0, n) {
            cin >> x;
            a.insert() 
        }


        for(auto& p : a) cout << p.second << " "; 
        cout << "\n";
    } 

    return 0;
}