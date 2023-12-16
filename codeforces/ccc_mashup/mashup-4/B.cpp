#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int w, h, u1, d1, u2, d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;

    while(h > 0) {
        w += h;
        if(h == d1) w -= u1;
        else if(h == d2) w -= u2;
        w = max(0, w);
        h--;
    }

    cout << w;
    
    return 0;
}