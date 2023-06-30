#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()

int main() {
    ifstream cin("mountains.in");
    ofstream cout("mountains.out");

    int n; cin >> n;
    vector<pair<int, int>> m(n);
    int x, y;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        m[i].first = x - y;
        m[i].second = x + y;
    }

    sort(m.begin(), m.end(), [](pair<int, int> a, pair<int, int> b) -> bool {
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });

    int distinct = n, right_x = INT_MIN;
    for(int i = 0; i < n; i++) {
        auto p = m[i];
        if(p.second <= right_x) distinct--;
        right_x = max(right_x, p.second);
    }

    cout << distinct << "\n";
}
