#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, r; cin >> l >> r;
    l--; r--;
    string s; cin >> s;

    vector<char> sArr(s.begin(), s.end());
    reverse(sArr.begin() + l, sArr.begin() + r + 1);
    for(char c : sArr) cout << c;

    return 0;
}