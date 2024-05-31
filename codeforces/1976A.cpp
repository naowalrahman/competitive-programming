/**
 * @file 1976A.cpp
 * @author Naowal Rahman
 * @date 2024-05-30 21:59
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    auto is_digit = [](char c) -> bool {
        int num = c - '0';
        return num >= 0 && num <= 9;
    };

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int sep = 0;
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(i > 0 && is_digit(s[i-1]) && !is_digit(s[i])) sep = i;
            if(i < n-1 && !is_digit(s[i]) && is_digit(s[i+1])) {
                ok = false;
                break;
            }
        }
        
        if(ok) {
            string d1(s.begin(), s.begin() + sep), d2(s.begin(), s.begin() + sep);
            string c1(s.begin() + sep, s.end()), c2(s.begin() + sep, s.end());
            sort(d2.begin(), d2.end());
            sort(c2.begin(), c2.end());
            cout << (d1 == d2 && c1 == c2 ? "YES" : "NO");
        }
        else cout << "NO";
        cout << "\n";
    }

    return 0;
}
