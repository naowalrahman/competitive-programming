#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("teleport.in");
    ofstream cout("teleport.out");

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int ans = abs(a - b);
    ans = min(ans, abs(a - x) + abs(b - y));
    ans = min(ans, abs(a - y) + abs(b - x));
    cout << ans;

    return 0;
}