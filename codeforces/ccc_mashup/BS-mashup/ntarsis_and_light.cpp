#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, l; cin >> n >> l;
    vector<int> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int max_diff = 0;
    for(int i = 1; i < n; i++) max_diff = max(max_diff, a[i] - a[i-1]);
    cout << setprecision(9) << max((double)a[0], max((double)max_diff / 2, (double)l - a[n-1]));
    
    return 0;
}