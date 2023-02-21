// A - Friends and Candies
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        vector<int> candies(n); 
        for(auto&x:candies) cin >> x;
        
        int totalCandies = accumulate(candies.begin(), candies.end(), 0);
        if(totalCandies % n != 0) {
            cout << -1 << "\n";
            continue;
        }
        sort(candies.begin(), candies.end());
        int desiredNum = totalCandies / n;

        int i = 0, candiesNeeded = 0;
        while(candies[i] < desiredNum) {
            candiesNeeded += desiredNum - candies[i];
            i++;
        }
        i = n - 1;
        int k = 0;
        int candiesAcquired = 0;
        while(candiesAcquired < candiesNeeded && i >= 0) {
            if(candies[i] <= desiredNum) {
                cout << -1 << "\n";
                continue;
            }
            candiesAcquired += candies[i] - desiredNum;
            i--; k++;
        }

        cout << k << "\n";
    }
}