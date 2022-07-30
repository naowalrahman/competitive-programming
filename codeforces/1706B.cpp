/**
 * @file 1706B.cpp
 * @author Naowal Rahman
 * @date 2022-07-24 13:48
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n; cin >> t;
    vector<vi> cols(100100);
    vi maxsize(100100);
    while(t--) {
        cin >> n;
        FORE(i, 1, n) cols[i].clear();
        int x;
        FORE(i, 1, n) {
            cin >> x;
            cols[x].push_back(i);
        }

        FORE(color, 1, n) {
            if(cols[color].empty()) {
                maxsize[color] = 0;
                continue;
            }
            int curr_index = cols[color][0];
            maxsize[color] = 1;
            for(int i : cols[color]) {
                if(i % 2 != curr_index % 2) {
                    maxsize[color]++;
                    curr_index = i;
                }
            }
        }

        FORE(num, 1, n) cout << maxsize[num] << " ";
        cout << "\n";
    }

    return 0;
}