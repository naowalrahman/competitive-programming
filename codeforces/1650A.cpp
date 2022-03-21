#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        // length of s is odd
        string s; cin >> s;
        char c; cin >> c; 
        int n = s.size();
        int ans = 0;

        vector<int> v; 
        for(int i = 0; i < n; i++) {
            if(s[i] == c) v.push_back(i);
        }        

        for(int i : v) {
            if(i % 2 == 0) {
                ans = 1; 
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}
