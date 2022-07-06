#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi nums(n);        
        for(auto& x : nums) cin >> x;

        int sum = accumulate(all(nums), 0);
        string ans = "no\n";
        for(int i = 0; i < n; i++) {
            if(sum - nums[i] == nums[i] * (n - 1)) {
                ans = "yes\n";
                break;
            }
        }
        cout << ans;
    }

    return 0;
}