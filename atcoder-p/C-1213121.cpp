#include <bits/stdc++.h>
using namespace std;

string ans(int n) {
    if(n == 1) return "1";
    else return ans(n - 1) + " " + to_string(n) + " " + ans(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    cout << ans(n);

    return 0;
}