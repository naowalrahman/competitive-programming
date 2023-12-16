#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, target; cin >> n >> target;
    vector<int> a(n);
    for(auto&x:a) cin >> x;

    int j = 0, ans = 0, cs = 0; // cs = current sum
    for(int i = 0; i < n; i++) {
        if(i != 0) cs -= a[i-1];
        while(j < n && cs < target) cs += a[j++];
        if(cs == target) ans++;
    }

    cout << ans;
    return 0;
}