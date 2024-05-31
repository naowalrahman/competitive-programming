/**
 * @file C-AtCoder_Magics.cpp
 * @author Naowal Rahman
 * @date 2024-05-18 08:46
 */
#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

#include "/home/naowal/Desktop/code/competitive-programming/debug.h"

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    pii p;
    auto cmp_strength = [](pii a, pii b) { return a.first > b.first; };
    auto cmp_cost = [](pii a, pii b) { return a.second < b.second; };
    set<pii, decltype(cmp_strength)> strength(cmp_strength);
    set<pii, decltype(cmp_cost)> cost(cmp_cost);
    vector<pii> pairs;

    for(int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        strength.insert(p);
        cost.insert(p);
        pairs.push_back(p);
    }

    dbg(strength, cost, pairs);

    return 0;
}
