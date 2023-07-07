#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    vector<vector<char>> grid(3, vector<char>(3));
    vector<char> chars = {'X', 'O', '+'};
    while(t--) {
        for(int i = 0; i < 3; i++) {for(int j = 0; j < 3; j++) cin >> grid[i][j];}

        char ans = '.';
        for(int i = 0; i < 3; i++) {
            char cans = grid[i][0];
            if(grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) ans = cans;
        }
        for(int j = 0; j < 3; j++) {
            char cans = grid[0][j];
            if(grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]) ans = cans;
        }
        char cans = grid[0][0];
        if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) ans = cans;
        cans = grid[0][2];
        if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) ans = cans;

        if(ans == '.') cout << "DRAW";
        else cout << ans;
        cout << "\n";
    }
    
    return 0;
}