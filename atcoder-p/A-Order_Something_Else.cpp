#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, p, q; cin >> n >> p >> q;
    vector<int> d(n);
    for(auto&x:d) cin >> x;
    
    int price = p;
    for(int i : d) price = min(price, q + i);

    cout << price;
    
    return 0;
}