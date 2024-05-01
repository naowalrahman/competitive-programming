/**
 * @file 1969B.cpp
 * @author Naowal Rahman
 * @date 2024-04-30 21:28
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        int64_t ans = 0;
        int zero_cnt = count(s.begin(), s.end(), '0');
        array<int, 2> q = {0, 0};
        for(char c : s) {
            ++q[c - '0'];
            if(c == '0') ans += q[1] > 0;
            else ans += zero_cnt - q[0];
        }        

        cout << ans << "\n";
    }

    return 0;
}
