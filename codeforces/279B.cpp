#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t; cin >> n >> t;
    vector<int> books(n);
    for(auto&x:books) cin >> x;

    int right = 0, ans = 0, curr_time = 0;
    for(int left = 0; left < n; left++) {
        if(left != 0) curr_time -= books[left-1];
        while(right < n && curr_time <= t - books[right]) curr_time += books[right++];
        ans = max(ans, right - left); 
    }
    cout << ans;
}