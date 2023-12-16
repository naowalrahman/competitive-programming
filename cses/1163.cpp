#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int x, n; cin >> x >> n;

    set<int> dif;
    dif.insert(0);
    dif.insert(x);
    multiset<int> len;
    len.insert(x);

    int light;
    for(int _ = 0; _ < n; _++) {
        cin >> light;
        auto tnext = dif.upper_bound(light);
        auto tprev = prev(tnext);
        int d_old = *tnext - *tprev;
        int d_new1 = *tnext - light;
        int d_new2 = light - *tprev;

        len.erase(len.find(d_old));
        len.insert(d_new1);
        len.insert(d_new2);
        
        dif.insert(light);

        cout << *prev(len.end()) << " ";
    }
    
    return 0;
}