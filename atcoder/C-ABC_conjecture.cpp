#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n; cin >> n;
    long long ans = 0;
    for(long long a = 1; a * a * a <= n; a++) {
        for(long long b = a; b <= sqrt(n / a); b++) {
            ans += n / (a * b) - b + 1;
        }
    }
    cout << ans;

    return 0;
}