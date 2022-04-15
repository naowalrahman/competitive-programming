#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    // West <-> East
    vector<int> need_west(n);
    vector<int> need_east(n);
    need_east[0] = 0;
    need_west[n - 1] = 0;

    for(int i = 1; i < n; i++) {
        if(s[i - 1] == 'W') need_east[i] = need_east[i - 1] + 1;
        else need_east[i] = need_east[i - 1];
    }
    for(int i = n - 2; i > -1; i--) {
        if(s[i + 1] == 'E') need_west[i] = need_west[i + 1] + 1;
        else need_west[i] = need_west[i + 1];
    }

    int nc = INT_MAX;
    for(int i = 0; i < n; i++) {
        nc = min(need_east[i] + need_west[i], nc);
    }

    cout << nc;

    return 0;
}