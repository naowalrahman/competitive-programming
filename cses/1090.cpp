/**
 * @file 1090.cpp
 * @author Naowal Rahman
 * @date 2024-02-21 13:06
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, x, w; cin >> n >> x;
    multiset<int> p;
    for(int i = 0; i < n; ++i) {
        cin >> w; 
        p.insert(w);
    }

    // for some weight w, find largest b <= x - w
    int ans = 0;
    while(!p.empty()) {
        auto itr = p.upper_bound(x - *p.begin());    
        if(itr != p.begin() && prev(itr) != p.begin()) p.erase(prev(itr));
        ++ans;
        p.erase(p.begin());
    }

    cout << ans;

    return 0;
}
