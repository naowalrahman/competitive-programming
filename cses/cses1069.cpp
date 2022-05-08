#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    int l = 1;
    int ans = 1;
    for(unsigned int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            l++;
            ans = max(ans, l);
        }
        else l = 1;
    }

    cout << ans;

    return 0;
}