#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int q; cin >> q;
    multiset<int> s;
    while(q--) {
        int type; cin >> type;
        if(type == 1) {
            int x; cin >> x;
            s.insert(x);
        }
        if(type == 2) {
            int x, c;
            cin >> x >> c;
            while(c--) {
                auto itr = s.find(x);
                if(itr == s.end()) break;
                s.erase(itr);
            }
        }
        if(type == 3) {
            cout << *prev(s.end()) - *s.begin() << "\n";
        }
    }

    return 0;
}