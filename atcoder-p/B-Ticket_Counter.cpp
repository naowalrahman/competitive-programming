/**
 * @file B.cpp
 * @author Naowal Rahman
 * @date 2024-06-18 21:59
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, a; cin >> n >> a;
    vector<int> t(n);
    for(int& x : t) cin >> x;

    int cur = 0;
    for(int i = 0; i < n; i++) {
        if(t[i] < cur) cur += a;
        else cur = t[i] + a;
        cout << cur << "\n";
    }

    return 0;
}
