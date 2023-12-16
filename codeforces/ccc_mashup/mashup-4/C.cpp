#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    struct Tile {
        vector<vector<int>> squares;
        Tile() {
            squares = vector<vector<int>>(2, vector<int>(2));
        }

        void read() {
            cin >> squares[0][0] >> squares[0][1]
                >> squares[1][0] >> squares[1][1];
        }

        bool isSymmetric() {
            return squares[0][1] == squares[1][0];
        }
    };
    
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;

        vector<Tile> tiles(n);
        for(int i = 0; i < n; i++) tiles[i].read();

        if(m % 2 == 1) {
            cout << "NO" << "\n";
            continue;
        }

        string ans = "NO";
        for(Tile tile : tiles) {
            if(tile.isSymmetric()) {
                ans = "YES";
                break;
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}