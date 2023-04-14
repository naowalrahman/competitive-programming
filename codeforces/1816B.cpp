/**
 * @file 1816B.cpp
 * @author Naowal Rahman
 * @date 2023-04-09 11:39
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int t, n; cin >> t;
    while(t--) {
        cin >> n; 
        deque<int> nums;
        FORE(i, 1, 2*n) nums.push_back(i);

        vector<vi> grid(2, vi(n));

        grid[0][0] = nums.back();
        bool alt = true;
        nums.pop_back();
        FOR(i, 0, n-1) {
            if(alt) {
                grid[1][i] = nums.front();
                nums.pop_front();
                grid[0][i+1] = nums.front();
                nums.pop_front();
            }
            else {
                grid[1][i] = nums.back();
                nums.pop_back();
                grid[0][i+1] = nums.back();
                nums.pop_back();
            }
            alt = !alt;
        }

        grid[1][n-1] = nums.back();
        swap(grid[1][1], grid[1][n-1]);

        for(vi line : grid) {
            for(int num : line) cout << num << " ";
            cout << "\n";
        }
        
    }

    return 0;
}