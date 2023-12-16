#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    vector<vector<char>> grid(3, vector<char>(3));
    vector<vector<char>> correct = {
        {'X', 'X', 'X'},
        {'O', 'O', 'O'},
        {'+', '+', '+'}
    };

    while(t--) {
        for(int i = 0; i < 3; i++) {for(int j = 0; j < 3; j++) cin >> grid[i][j];}

        char ans = '.';
        for(int i = 0; i < 3; i++) {
            vector<char> chars = {grid[i][0], grid[i][1], grid[i][2]};
            if(find(all(correct), chars) != correct.end()) ans = grid[i][0];
        }
        for(int j = 0; j < 3; j++) {
            vector<char> chars = {grid[0][j], grid[1][j], grid[2][j]};
            if(find(all(correct), chars) != correct.end()) ans = grid[0][j];
        }

        vector<char> chars = {grid[0][0], grid[1][1], grid[2][2]};
        if(find(all(correct), chars) != correct.end()) ans = grid[0][0];

        chars = {grid[0][2], grid[1][1], grid[2][0]};
        if(find(all(correct), chars) != correct.end()) ans = grid[0][2];

        if(ans == '.') cout << "DRAW";
        else cout << ans;
        cout << "\n";
    }
    
    return 0;
}