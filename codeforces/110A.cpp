#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    string s = to_string(n);
    int nl = 0;
    for(char c : s) {
        if(c == '4' || c == '7')
            nl++;
    }
    cout << (nl == 4 || nl == 7 ? "YES" : "NO");

    return 0;
}