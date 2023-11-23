/**
 * @author      : Naowal Rahman
 * @created     : 07/22/2023 10:15:59 PM
 * @filename    : 1850F
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi a(n); for(auto&x:a) cin >> x;

        map<int, int> freq;
        for(int i : a) freq[i]++;
        
        vi occur(n+1);
        for(auto p : freq) {
            int i = p.first;
            while(i <= n) {
                occur[i] += p.second;
                i += p.first;
            }
        }

        cout << *max_element(next(occur.begin()), occur.end()) << "\n";
    }


    return 0;
}

