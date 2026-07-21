/**
 * @file 2227D.cpp
 * @author Naowal Rahman
 * @date 2026-07-20 20:18
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int n, z1 = -1, z2; cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                if (z1 == -1) z1 = i;
                else z2 = i;
            }
        }

        int mex = 1;
        for (int z : {z1, z2}) {
            vector<bool> mark(n + 1);
            mark[0] = true;
            for (int i = 1; z - i >= 0 && z + i < 2 * n; i++) {
                if (a[z - i] == a[z + i]) mark[a[z - i]] = true;
                else break;
            }
            for (int i = 0; i < n + 1; i++) {
                if (!mark[i]) {
                    mex = max(mex, i);
                    break;
                }
            }
        }
        
        int btwn_works = true;
        vector<bool> mark(n + 1);
        mark[0] = true;
        for (int i = 1; i <= (z2 - z1) / 2; i++) {
            if (a[z1 + i] == a[z2 - i]) mark[a[z1 + i]] = true;
            else {
                btwn_works = false;
                break;
            }
        }

        if (btwn_works) {
            for (int i = 1; z1 - i >= 0 && z2 + i < 2 * n; i++) {
                if (a[z1 - i] == a[z2 + i]) mark[a[z1 - i]] = true;
                else break;
            }
            for (int i = 0; i < n + 1; i++) {
                if (!mark[i]) {
                    mex = max(mex, i);
                    break;
                }
            }
        }
        
        cout << mex << "\n";
    }

    return 0;
}
