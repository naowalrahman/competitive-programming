#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<vector<int>> graph(26);
        int n = s1.size();
        for (int i = 0; i < n; i++) {
            int char_a = s1[i] - 'a';
            int char_b = s2[i] - 'a';
            graph[char_a].push_back(char_b);
            graph[char_b].push_back(char_a);
        }

        vector<bool> vis(26);
        auto dfs = [&](int start, const auto& dfs) -> int {
            if (vis[start]) return start;
            vis[start] = true;
            int best = start;
            for (int con : graph[start]) {
                best = min(best, dfs(con, dfs));
            }

            return best;
        };

        vector<char> translate(26);
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) vis[j] = false;
            translate[i] = 'a' + dfs(i, dfs);
        }

        for (int i = 0; i < baseStr.size(); i++) {
            baseStr[i] = translate[baseStr[i] - 'a'];
        }

        return baseStr;
    }
};
