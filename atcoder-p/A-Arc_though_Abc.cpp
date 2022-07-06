#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, c; cin >> r >> c;
    vi v1(2), v2(2);
    cin >> v1[0] >> v1[1] >> v2[0] >> v2[1];
    cout << (r == 1 ? v1[c-1] : v2[c-1]);

    return 0;
}