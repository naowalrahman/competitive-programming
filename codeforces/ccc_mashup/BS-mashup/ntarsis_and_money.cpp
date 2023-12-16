#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        int n, c1, c2; cin >> n;
        c1 = c2 = n / 3;

        if(n % 3 == 1) ++c1;
        else if(n % 3 == 2) ++c2;
        printf("%d %d\n", c1, c2);
    }
    
    return 0;
}