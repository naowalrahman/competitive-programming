/**
 * @author      : Naowal Rahman
 * @created     : 07/25/2023 02:38:05 PM
 * @filename    : 104468H
 */
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
#define sz(x) (int)x.size()

int binary_search(int x, int col, vector<int>& allexcept, vector<vi>& arr, int sum) {
    int n = sz(arr[col])-1;
    int low = 1, high = n;
    while(low < high) {
        int mid = (low + high) / 2;
        int val = x - (sum - allexcept[col]) * mid;
        if(val >= arr[col][mid]) low = mid+1;
        else high = mid;
    }

    if(low <= n && arr[col][low] <= x - (sum - allexcept[col]) * (low+1)) low++;
    return low;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    vi a(n), c(n);
    for(auto&x:a) cin >> x;
    int color;
    FOR(i, 0, n) {
        cin >> color;
        c[i] = --color;
    }
 
    vector<vi> arr(2e5+1, {0});
    FOR(i, 0, n) arr[c[i]].push_back(a[i] + *prev(arr[c[i]].end()));
 
    vi allexcept(2e5+1);
    int sum = 0;

    int q; cin >> q;
    while(q--) {
        int t, col, x; cin >> t >> col >> x;
        --col;
        if(t == 1) {
            allexcept[col] += x;
            sum += x;
        }
        else {
            cout << binary_search(x, col, allexcept, arr, sum) - 1 << "\n";
        }
    }
 
    return 0;
}
 