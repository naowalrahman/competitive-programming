#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y; cin >> x >> y;
    int ans = 0;

    if(y > x) {
        int diff = y - x;
        ans = ceil(diff / 10.0);
    }

    cout << ans;

    return 0;
}