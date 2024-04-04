/**
 * @file high_card_wins.cpp
 * @author Naowal Rahman
 * @date 2024-02-25 13:38
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ifstream cin("highcard.in");
    ofstream cout("highcard.out");

    int n; cin >> n;
    vector<int> opp(n);
    for(auto &x : opp) cin >> x;
    
    set<int> me;
    for(int i = 1; i <= 2 * n; i++) me.insert(i);
    for(int i : opp) me.erase(i);

    int score = 0;
    for(int i : opp) {
        auto itr = me.upper_bound(i);
        if(itr != me.end()) {
            ++score;
            me.erase(itr);
        }
    }

    cout << score;

    return 0;
}
