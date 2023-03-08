#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("lifeguards.in");
    ofstream cout("lifeguards.out");

    int n, t1, t2; cin >> n;
    vector<pair<int, int>> intervals;
    for(int i = 0; i < n; i++) {
        cin >> t1 >> t2;
        intervals.push_back(make_pair(t1, t2));
    }

    int start, end, ans = 0;
    for(int fired = 0; fired < n; fired++) {
        set<int> time;
        for(int i = 0; i < n; i++) {
            if(i == fired) continue;
            start = intervals[i].first, end = intervals[i].second;
            for(int j = start; j < end; j++) time.insert(j);
        }

        ans = max(ans, (int)time.size());
    }

    cout << ans;
    return 0;
}