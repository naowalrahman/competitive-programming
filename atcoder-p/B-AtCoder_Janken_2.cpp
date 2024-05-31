/**
 * @file B-AtCoder_Janken_2.cpp
 * @author Naowal Rahman
 * @date 2024-05-18 08:36
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, c, tot = 0; cin >> n;
    vector<string> names(n);
    for(int i = 0; i < n; i++) {
        cin >> names[i] >> c;
        tot += c;
    }
    sort(names.begin(), names.end());
    cout << names[tot % n];

    return 0;
}
