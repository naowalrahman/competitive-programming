#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<long long> dp = {0, 1, 1}; 
    for (int i = 3; i <= 70; i++) {
        dp.push_back(dp[i - 1] + dp[i - 2]);
    }
    cout << dp[70];

    return 0;
}