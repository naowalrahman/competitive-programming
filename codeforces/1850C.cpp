#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    vector<vector<char>> grid(8, vector<char>(8));
    int t; cin >> t;
    while(t--) {
        int r, c;
        bool first_letter_found = false;
        for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) {
            cin >> grid[i][j];
            if(grid[i][j] != '.' && !first_letter_found) {
                r = i;
                c = j;
                first_letter_found = true;
            }
        }

        string ans = "";
        while(r < 8 && grid[r][c] != '.') ans += grid[r++][c]; 
        cout << ans << "\n";
    }
    
    return 0;
}