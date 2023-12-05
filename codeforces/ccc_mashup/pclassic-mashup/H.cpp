#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<int> a(n);
    for(auto&x:a) cin >> x; 
 
    int curr = 0, alt = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > alt) curr++;
        else if(curr >= 3) {
            ans++;
            curr = 1;
        }
        else curr = 1;
        alt = a[i];
    }
    if(curr >= 3) ans++;
 
    cout << ans;
    
    return 0;
}