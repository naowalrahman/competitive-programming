#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()

int main() {
    int n, s, e; cin >> n;
    vector<pair<int, int>> times;
    for(int i = 0; i < n; i++) {
        cin >> s >> e;
        times.push_back({s, 1});
        times.push_back({e, -1});
    }

    sort(all(times));
    
    vector<int> change(2*n);
    for(int i = 0; i < 2*n; i++) change[i] = times[i].second;

    vector<int> pfx(2*n+1);
    partial_sum(all(change), pfx.begin()+1);
    cout << *max_element(all(pfx)) << "\n";

    return 0;
}