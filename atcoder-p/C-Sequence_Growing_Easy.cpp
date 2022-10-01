/**
 * @author      : Naowal Rahman
 * @created     : 06/28/2022 07:03:28 PM
 * @filename    : C-Sequence_Growing_Easy
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int (i) = (s); (i) < (e); (i)++)
#define FORE(i, s, e) for(int (i) = (s); (i) <= (e); (i)++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi a(n); for(auto&x:a) cin >> x;

    bool possible = true;
    if(a[0] != 0) possible = false;
    FOR(i, 1, n) {
        if(a[i] - a[i-1] > 1) possible = false;
    }

    long long move_count = 0;
    if(possible) {
        FOR(i, 1, n) {
            if(a[i] == a[i-1]+1) move_count++;
            else move_count += a[i];
        }
        cout << move_count;
    }
    else cout << -1;

    return 0;
}

