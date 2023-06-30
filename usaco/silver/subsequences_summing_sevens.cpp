#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define int long long

signed main() {
    ifstream cin("div7.in");
    ofstream cout("div7.out");

    int n;
    cin >> n;
    vector<int> id(n);
    for (auto& x : id)
        cin >> x;

    vector<int> minLocs(7, LLONG_MAX), maxLocs(7, LLONG_MIN);
    int currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum += id[i];
        currSum %= 7;
        minLocs[currSum] = min(minLocs[currSum], i);
        maxLocs[currSum] = i;
    }

    int ans = 0;
    for (int i = 0; i < 7; i++)
        ans = max(ans, maxLocs[i] - minLocs[i]);

    cout << ans;
    return 0;
}
