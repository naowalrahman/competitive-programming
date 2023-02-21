#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("speeding.in");
    ofstream cout("speeding.out");

    int n, m, x = 0, segLength, speed; cin >> n >> m;
    vector<int> roadSpeed(100), bessieSpeed(100);
    for(int i = 0; i < n; i++) {
        cin >> segLength >> speed;
        for(int j = x; j < x + segLength; j++)
            roadSpeed[j] = speed;
        x += segLength;
    }
    x = 0;
    for(int i = 0; i < m; i++) {
        cin >> segLength >> speed;
        for(int j = x; j < x + segLength; j++)
            bessieSpeed[j] = speed;
        x += segLength;
    }

    int ans = 0;
    for(int i = 0; i < 100; i++)
        ans = max(ans, bessieSpeed[i] - roadSpeed[i]);
    
    cout << ans;
}