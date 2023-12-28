#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        if(a == b) cout << c;
        else if(a == c) cout << b;
        else if(b == c) cout << a;
        cout << "\n";
    }
    
    return 0;
}