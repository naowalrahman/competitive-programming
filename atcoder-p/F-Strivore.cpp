#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int main() {
    int k; string s;
    cin >> k >> s;

    int ans = 1;
    for(int i = 1; i <= k; i++) {
        ans *= 26 * i;
        ans %= MOD;
    }

    cout << ans;

    /**
    n = s.length
    26 * 4 * 26 * 5 * 26 * 6 + 26 * 7 * 26 * 8
    = 26^k * (8 * 7 * 6 * 5 * 4)
    = 26^k * (n + k)! / n!
      

     * 
     */
}