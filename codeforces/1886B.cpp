/**
 * @author      : Naowal Rahman
 * @created     : 11/13/2023 02:11:06 PM
 * @filename    : 1886B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cout.precision(11);

    struct point {
        int x, y;
        void read() {
            cin >> x >> y;
        }
    };
    
    auto dist = [](point &p1, point &p2) -> double {
        return sqrt((p1.x - p2.x) * (p1.x - p2.x) 
               + (p1.y - p2.y) * (p1.y - p2.y));
    };

    int t; cin >> t;
    while(t--) {
        point p, a, b;
        p.read(); a.read(); b.read();
        point o; o.x = 0, o.y = 0;

        cout << min({
            max(dist(o, a), dist(a, p)),
            max(dist(o, b), dist(b, p)),
            max({dist(o, a), dist(b, p), dist(a, b) / 2}),
            max({dist(o, b), dist(a, p), dist(a, b) / 2})
        }) << "\n";
    }

    return 0;
}

