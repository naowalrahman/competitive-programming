#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        if(a == 0) cout << 1 << "\n";
        else if (b == 0) cout << a + 1 << "\n";
        else cout << a + b * 2 + 1 << "\n";
    }

    return 0;
}