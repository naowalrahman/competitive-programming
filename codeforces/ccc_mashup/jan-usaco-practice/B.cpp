// B - Symmetric Matrix
#include <bits/stdc++.h>
using namespace std;

int main() {
    struct tile {
        int values[2][2];
        void read() {
            cin >> values[0][0] >> values[0][1] 
                >> values[1][0] >> values[1][1];
        } 
        bool isDiagSymmetric() {
            return values[1][0] == values[0][1];
        }
    };

    int t, n, m; cin >> t;
    tile currTile;
    while(t--) {
        cin >> n >> m;
        vector<tile> tiles(n);
        for(int i = 0; i < n; i++) {
            currTile.read();
            tiles[i] = currTile;
        }

        if(m % 2 != 0) {
            cout << "NO" << "\n";
            continue;
        }

        bool ok = false;
        for(tile tl : tiles)
            if(tl.isDiagSymmetric()) ok = true;
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
}