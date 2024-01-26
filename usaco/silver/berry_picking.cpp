/**
 * @author      : Naowal Rahman
 * @created     : 07/04/2022 04:07:44 PM
 * @filename    : berry_picking
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream cin("berries.in");
    ofstream cout("berries.out");

    int n, k; cin >> n >> k;
    int A[1001];
    int mx = 0;
    FOR(i, 0, n) {
        cin >> A[i];
        mx = max(mx, A[i]);
    }

    int best = 0;
    FOR(q, 1, mx) {
        int chunks[1001] = {0};
        FOR(i, 0, n) {
            chunks[q] += A[i] / q;
            chunks[A[i]%q]++;
        }

        if(k/2 > chunks[q]) continue;
        chunks[q] -= k/2;

        int given = 0, currc = q, total = 0;
        while(currc > 0 && given < k/2) {
            if(chunks[currc] > 0) {
                given++;
                total += currc;
                chunks[currc]--;
            }
            else currc--;
        }

        if(given == k/2) {
            best = max(best, total);
        }
    }

    cout << best;

    return 0;
}

