/**
 * @file A-Range_Flip_Find_Route.cpp
 * @author Naowal Rahman
 * @date 2022-06-18 13:19
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h, w; cin >> h >> w;
    char grid[h+1][w+1]; 
    int dp[h+1][w+1];

    for(int i = 0; i <= h; i++) dp[i][0] = INT_MAX;
    for(int i = 0; i <= w; i++) dp[0][i] = INT_MAX;

    // establishing 2D char array
    string s; 
    for(int i = 0; i < h; i++) {
        cin >> s;  
        for(int j = 0; j < w; j++) {
            grid[i+1][j+1] = s[j];
        }
    }

    // make value above (1,1) 0 so min() doesn't
    // return INT_MAX
    dp[0][1] = 0;
    grid[0][1] = '.';

    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(grid[i][j] == '#') {
                int above = dp[i-1][j], left = dp[i][j-1];
                if(grid[i-1][j] == '.') above++;
                if(grid[i][j-1] == '.') left++;
                dp[i][j] = min(above, left);
            }
            else {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[h][w];
    return 0;
}