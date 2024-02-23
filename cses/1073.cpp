/**
 * @file 1073.cpp
 * @author Naowal Rahman
 * @date 2024-02-23 16:46
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    vector<int> k(n);
    for(auto&x:k) cin >> x;
    multiset<int> towers;

    for(int t : k) {
        if(!towers.empty()) {
            auto itr = towers.upper_bound(t);
            if(itr != towers.end()) towers.erase(itr);
        }
        towers.insert(t);
    }

    cout << towers.size();

    return 0;
}
