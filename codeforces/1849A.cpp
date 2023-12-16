#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int b, c, h; cin >> b >> c >> h;
        cout << min(b-1, c + h) * 2 + 1 << "\n";
    }
    
    return 0;
}