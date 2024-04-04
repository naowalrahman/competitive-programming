/**
 * @file C.cpp
 * @author Naowal Rahman
 * @date 2024-02-26 17:21
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<char> works(k);
    for(auto &x : works) cin >> x;
    vector<int> markers = {0};

    for(int i = 0; i < n; i++) {
        bool valid = false;
        for(char c : works) {
            if(s[i] == c) {
                valid = true;
                break;
            }
        }
        if(!valid) markers.push_back(i);
    }

    markers.push_back(n);

    long long ans = 0;
    for(int i = 1; i < (int)markers.size(); i++) {
        long long L = markers[i] - markers[i-1];
        if(i != 1) --L;
        ans += L * (L + 1) / 2;
    }

    cout << ans;

    return 0;
}
