/**
 * @file 1807.cpp
 * @author Naowal Rahman
 * @date 2023-03-19 15:30
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

    int t, n, x; cin >> t;
    int odd_sum, even_sum;
    while(t--) {
        odd_sum = 0, even_sum = 0;
        cin >> n;
        while(n--) {
            cin >> x;
            if(x % 2 == 0) even_sum += x;
            else odd_sum += x;
        }

        if(even_sum > odd_sum) cout << "yes";
        else cout << "no";
        cout << "\n";
    }

    return 0;
}