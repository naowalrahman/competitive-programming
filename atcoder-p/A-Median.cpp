#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c; cin >> a >> b >> c;
    if((b >= a && b <= c) || (b <= a && b >= c))
        cout << "Yes";
    else cout << "No";

    return 0;
}