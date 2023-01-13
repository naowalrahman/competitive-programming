/**
 * @author      : Naowal Rahman
 * @created     : 08/17/2022 12:06:48 PM
 * @filename    : C
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, s, k, x; cin >> t;

    while(t--) {
        cin >> n >> s >> k;

        vi closed_arr;
        bool sc = false;
        FOR(i, 0, k) {
            cin >> x;
            if(x == s) sc = true;
            closed_arr.push_back(x);
        }

        set<int> closed(closed_arr.begin(), closed_arr.end());

        if(sc) {
            int dist1 = INT_MAX, dist2 = INT_MAX;
            FORE(i, s, n) {
                if(closed.find(i) == closed.end()) {
                    dist1 = i - s;
                    break;
                }
            }
            for(int i = s; i > 0; i--) {
                if(closed.find(i) == closed.end()) {
                    dist2 = s - i;
                    break;
                }
            }
            
            cout << min(dist1, dist2) << "\n";
        }
        else cout << 0 << "\n";
    }    

    return 0;
}

