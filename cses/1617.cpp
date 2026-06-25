#include <bits/stdc++.h>
using namespace std;
 
int main() {
    const int MOD = 1e9 + 7;
    int n, ans = 1; cin >> n;
    for (int i = 0; i < n; i++) ans = ans * 2 % MOD;
    cout << ans;
}
