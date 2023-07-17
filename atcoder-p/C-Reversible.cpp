#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<string> s(n);
    for(auto&x:s) cin >> x;

    for(int i = 0; i < n; i++) {
        int l = sz(s[i]);
        for(int j = 0; j < l; j++) {
            if(s[i][j] > s[i][l-j-1]) reverse(s[i].begin(), s[i].end());
            else if(s[i][j] == s[i][l-j-1]) continue;
            break;
        }
    }

    set<string> sc(s.begin(), s.end());
    cout << sc.size();
    
    return 0;
}