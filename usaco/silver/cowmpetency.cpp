#include <bits/stdc++.h>
using namespace std;

#define exit { cout << -1 << "\n"; return; }

void solve() {
    int n, q, max_score; cin >> n >> q >> max_score;
    vector<int> c(n), f(n);
    for(auto &x : c) cin >> x;

    vector<bool> known(n, false);
    for(int i = 0; i < n; i++) {
        if(c[i] == 0) c[i] = 1;
        else known[i] = true;
    }

    int a, h;
    while(q--) {
        cin >> a >> h;
        f[--a] = --h; 
    }

    int cur = 0;
    while(cur < n) {
        int i = cur;
        while(cur < f[i]) {
            if(f[cur] != 0 && f[i] != f[cur]) exit;
            f[cur++] = f[i];
        }
        cur = max(cur, i + 1);
    }

    int i = 0, max_before = 0, max_after = 0;
    while(i < n) {
        max_before = max(max_before, c[i]);
        max_after = max(max_after, c[i]);
        if(f[i] == 0) {
            ++i;
            continue;
        }
        max_after = max(max_after, *max_element(c.begin() + i, c.begin() + f[i]));

        if(max_after > max_before) {
            bool found = false;
            for(int j = i; j >= 0; j--) {
                if(f[j] != 0 && f[j] < f[i]) exit;
                if(known[j]) continue;
                c[j] = max_after;
                found = true;
                break;
            }
            if(!found) exit; 
            max_before = max_after;
        }

        if(!known[f[i]]) c[f[i]] = max_before + 1;
        else if(c[f[i]] <= max_before) exit;

        i = f[i];
    }

    if(*max_element(c.begin(), c.end()) > max_score) exit;
    for(int i = 0; i < n; i++) cout << c[i] << (i == n - 1 ? "\n" : " ");
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
