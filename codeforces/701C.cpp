#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

int main() {
    cin.tie(nullptr) -> sync_with_stdio(false);
    
    int n; cin >> n;
    vector<char> flats(n);
    for(auto&x:flats) cin >> x;
    int nf = sz(set<char>(flats.begin(), flats.end()));

    int i = 0, min_flats = INT_MAX;
    unordered_map<char, int> ps;
    for(int j = 0; j < n; j++) {
        ps[flats[j]]++;
        while(i < j && ps[flats[i]] > 1) ps[flats[i++]]--;
        if(sz(ps) == nf) min_flats = min(min_flats, j-i+1);
    }

    cout << min_flats;
}
