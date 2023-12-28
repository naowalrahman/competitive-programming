#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        vector<vector<char>> grid(3, vector<char>(3));
        int x;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> grid[i][j];
                if(grid[i][j] == '?') x = i;
            }
        }

        set<int> row({'A', 'B', 'C'});
        for(int i = 0; i < 3; i++) row.erase(grid[x][i]);
        cout << (char)*row.begin() << "\n";
    }
    
    return 0;
}