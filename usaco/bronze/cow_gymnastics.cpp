#include <bits/stdc++.h>
using namespace std;

bool consistent(vector<vector<int>>& trials, int cow1, int cow2) {
    bool good = true;
    int pos1, pos2;
    for(int t = 0; t < trials.size(); t++) {
        for(int pos = 0; pos < trials[0].size(); pos++) {
            if(trials[t][pos] == cow1) pos1 = pos;
            if(trials[t][pos] == cow2) pos2 = pos;
        }
        if(pos1 <= pos2) good = false;
    }

    return good;
}

int main() {
    ifstream cin("gymnastics.in");
    ofstream cout("gymnastics.out");

    int k, n; cin >> k >> n;
    vector<vector<int>> ranks(k, vector<int>(n));
    for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            cin >> ranks[i][j];

    int ans = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(consistent(ranks, i, j)) ans++;

    cout << ans;
    return 0;
}