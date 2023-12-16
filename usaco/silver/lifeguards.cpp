#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main() {
    ifstream cin("lifeguards.in");
    ofstream cout("lifeguards.out");
    
    int n; cin >> n;
    vector<pair<int, int>> lg;

    lg.push_back({0, 0});
    int start, end;
    for(int i = 0; i < n; i++) {
        cin >> start >> end; 
        lg.push_back({start, end});
    }
    lg.push_back({INT_MAX, INT_MAX});

    sort(lg.begin(), lg.end());

    // AT = alone time
    int minAT = INT_MAX, r, l, maxl = 0, total = 0;
    for(int i = 1; i <= n; i++) {
        l = max(lg[i-1].s, lg[i].f);
        maxl = max(maxl, l);
        r = min(lg[i].s, lg[i+1].f);
        minAT = min(minAT, max(0, r - l));
        total += max(0, lg[i].s - maxl);
    }

    cout << total - minAT;
}