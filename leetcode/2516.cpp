#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int takeCharacters(string s, int k) {
        // pick an index to be a set number of right minutes, get the char count by doing suffix subtraction for a, b, c.
        // binary search the prefix sums for a, b, c to get corresponding left minutes indicies, take the max of that.
        // take the max over all possible right minute indexes [0, n - 1]
        // runs in O(n lg n)
        int n = s.size();
        vector<vector<int>> pfx(3, vector<int>(n + 1)), sfx(3, vector<int>(n + 1));
        for (int i = 0; i < 3; i++) {
            for (int j = 1; j <= n; j++) {
                pfx[i][j] = pfx[i][j - 1] + (s[j - 1] - 'a' == i);
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = n - 1; j >= 0; j--) {
                sfx[i][j] = sfx[i][j + 1] + (s[j] - 'a' == i);
            }
        }

        int ans = INT_MAX;
        vector<int> L(3);
        for (int r = 0; r <= n; r++) {
            for (int i = 0; i < 3; i++) {
                L[i] = lower_bound(pfx[i].begin(), pfx[i].end(), k - sfx[i][r]) - pfx[i].begin();
            }
            ans = min(ans, *max_element(L.begin(), L.end()) + n - r);
        }

        return ans <= n ? ans : -1;
    }
};
