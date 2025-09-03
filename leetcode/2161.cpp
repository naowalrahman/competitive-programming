#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller, larger, equal, ans;
        for (int i : nums) {
            if (i == pivot) equal.push_back(i);
            else if (i < pivot) smaller.push_back(i);
            else larger.push_back(i);
        }

        for(int i : smaller) ans.push_back(i);
        for(int i : equal) ans.push_back(i);
        for(int i : larger) ans.push_back(i);

        return ans;
    }
};
