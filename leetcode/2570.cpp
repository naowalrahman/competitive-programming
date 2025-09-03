#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> m;
        for (auto& p : nums1) m[p[0]] = p[1];
        for (auto& p : nums2) m[p[0]] += p[1];

        vector<vector<int>> v;
        for (auto& p : m) v.push_back({p.first, p.second});
        return v;        
    }
};
