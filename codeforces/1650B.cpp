#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    /*
    We want the highest value of x. The value of a is fixed, so we cannot change that. to maximize the value of x mod a, we want x to be equal to 2a - 1.
    
    we want the largest value of x that is less than a
    */

    int t; cin >> t;
    while(t--) {
        int l, r, a; 
        cin >> l >> r >> a;
        
        int ans = r / a + r % a;
        int m = r / a * a - 1;
        if(m >= l) ans = max(ans, m / a + m % a);

        cout << ans << "\n"; 
    }
    
    return 0;
}