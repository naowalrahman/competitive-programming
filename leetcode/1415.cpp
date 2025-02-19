#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string ans;
    int i = 0, n, k;

    void helper(string s) {
        if (s.size() == n) {
            if (i == k)
                return;
            ans = s;
            ++i;
            return;
        }
        if (s.empty()) {
            helper(s + 'a');
            helper(s + 'b');
            helper(s + 'c');
        } else {
            char c1, c2;
            int last = s.size() - 1;
            if (s[last] == 'a')
                c1 = 'b', c2 = 'c';
            else if (s[last] == 'b')
                c1 = 'a', c2 = 'c';
            else
                c1 = 'a', c2 = 'b';

            helper(s + c1);
            helper(s + c2);
        }
    }
    string getHappyString(int n, int k) {
        this->n = n;
        this->k = k;
        helper("");
        if (k > i)
            return "";
        return ans;
    }
};
