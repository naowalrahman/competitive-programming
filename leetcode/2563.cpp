#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long n = nums.size(), ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            auto j = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]);
            auto k = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
            ans += j - k;
        }
        return ans;
    }
};
