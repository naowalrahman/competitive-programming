/**
 * @author      : Naowal Rahman
 * @created     : 08/06/2022 11:42:44 AM
 * @filename    : 1711A
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        if(n == 1) {
            cout << 1 << "\n";
            continue;
        }
        vi perm(n+1); 
        FORE(i, 1, n) perm[i] = i;
        
        for(int i = 1; i < n; i += 2)
            swap(perm[i], perm[i + 1]);

        if(n % 2 == 1)
            swap(perm[n], perm[n - 1]);

        FORE(i, 1, n) cout << perm[i] << " ";
        cout << "\n";
    }

    return 0;
}

