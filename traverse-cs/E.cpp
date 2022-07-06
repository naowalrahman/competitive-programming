/**
 * @file E.cpp
 * @author Naowal Rahman
 * @date 2022-06-19 13:18
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vi cakes(n);
    for(auto&x:cakes) cin >> x;    
    set<int> levels(cakes.begin(), cakes.end());
    cout << levels.size();

    return 0;
}