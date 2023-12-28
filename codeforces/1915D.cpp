#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string word; cin >> word;
    vector<int> compress(n);

    for(int i = 0; i < n; i++) {
        char c = word[i];
        if(c == 'b' || c == 'c' || c == 'd') compress[i] = 1;
        else compress[i] = 0;
    }
    
    vector<int> dot(n);
    for(int i = 1; i < n; i++) if(compress[i] == compress[i-1]) dot[i] = 1;
    for(int i = 2; i < n - 1; i++) if(compress[i-2] == 1 && compress[i-1] == 0 && !dot[i+1]) dot[i] = 1;
    for(int i = 0; i < n; i++) cout << (dot[i] ? "." : "") << word[i];
    
    cout << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
