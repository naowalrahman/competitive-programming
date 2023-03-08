/**
 * @file shell_game.cpp
 * @author Naowal Rahman
 * @date 2022-07-15 22:55
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("shell.in");
    ofstream cout("shell.out");

    int n; cin >> n;
    vector<pair<int, int>> swaps(n);
    vi guess(n); 
    FOR(i, 0, n) {
        int a, b, g; cin >> a >> b >> g;
        swaps[i] = {a, b};
        guess[i] = g;
    }

    vi p1 = {0, 1, 0, 0}, p2 = {0, 0, 1, 0}, p3 = {0, 0, 0, 1};
    vi ans(3);
    FOR(i, 0, n) {
        int s1 = swaps[i].first, s2 = swaps[i].second;
        swap(p1[s1], p1[s2]); 
        if(p1[guess[i]] == 1) ans[0]++;
    }
    FOR(i, 0, n) {
        int s1 = swaps[i].first, s2 = swaps[i].second;
        swap(p2[s1], p2[s2]); 
        if(p2[guess[i]] == 1) ans[1]++;
    }
    FOR(i, 0, n) {
        int s1 = swaps[i].first, s2 = swaps[i].second;
        swap(p3[s1], p3[s2]); 
        if(p3[guess[i]] == 1) ans[2]++;
    }

    cout << *max_element(ans.begin(), ans.end());

    return 0;
}