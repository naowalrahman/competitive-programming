/**
 * @file 1691C.cpp
 * @author Naowal Rahman
 * @date 2022-06-18 21:51
 */

#include <bits/stdc++.h>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k; string s;
        cin >> n >> k >> s;

        int num_ones = 0, first_one = n, last_one = -1;
        FOR(i, 0, n) {
            if(s[i] == '1') {
                num_ones++;
                if(first_one == n) first_one = i;
                last_one = i;
            }
        }

        int addon = 0;
        if(num_ones > 0 && (n-last_one-1) <= k) {
            k -= n-last_one-1;
            addon++;
            num_ones--;
        }
        if(num_ones > 0 && first_one <= k) {
            k -= first_one;
            addon += 10;
            num_ones--;
        }

        cout << 11 * num_ones + addon << "\n";
    }

    return 0;
} 