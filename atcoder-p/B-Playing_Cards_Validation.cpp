/**
 * @file B-Playing_Cards_Validation.cpp
 * @author Naowal Rahman
 * @date 2022-11-12 18:44
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

    set<char> fl = {'H', 'D', 'C', 'S'};
    set<char> slc = {'A', 'T', 'J', 'Q', 'K'};
    set<int> sli = {2, 3, 4, 5, 6, 7, 8, 9};
    bool ok = true;

    int n; cin >> n;
    char a, b;
    FOR(i, 0, n) {
        cin >> a >> b;
        bool ok1 = find(all(fl), a) != fl.end();
        bool ok2 = find(all(slc), b) != slc.end() ||
                   find(all(sli), b) != sli.end();
        if(!(ok1 && ok2)) ok = false;
    }

    cout << (ok ? "Yes" : "No");

    return 0;
}