#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    multiset<int> s;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    for(int i = 0; i < n - 1; i++) {
        multiset<int> s2;
        for(auto itr = ++s.begin(); itr != s.end(); itr++) {
            s2.insert((*itr + *s.begin()) % MOD);
        }
        s = s2;
    }

    for(int i : s) cout << i << " ";
    
    return 0;
}