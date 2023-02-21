#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<ll> arr(n);
    for(auto& x : arr) cin >> x;

    sort(arr.begin(), arr.end());
    ll max_profit = 0, optimal_tuition;
    for(ll i = 0; i < n; i++) {
        if((n-i) * arr[i] > max_profit) {
            max_profit = (n-i) * arr[i];
            optimal_tuition = arr[i];
        }
    }

    cout << max_profit << " " << optimal_tuition;
}