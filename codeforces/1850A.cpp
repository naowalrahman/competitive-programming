#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        string ans = "NO";
        if(a + b > 9 || a + c > 9 || b + c > 9) ans = "YES";
        
        cout << ans << "\n";
    } 
    
    return 0;
}