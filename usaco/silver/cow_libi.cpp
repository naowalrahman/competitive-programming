/**
 * @file cow_libi.cpp
 * @author Naowal Rahman
 * @date 2025-08-20 16:54
 */
#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef struct coord {
    int t, x, y;

    coord() { t = 0, x = 0, y = 0; }

    coord(int x, int y, int t) { this->x = x, this->y = y, this->t = t; }
} coord;

int square(int x) {
    return x * x;
}

bool is_feasible(coord& a, coord& b) {
    return square(a.x - b.x) + square(a.y - b.y) <= square(a.t - b.t);
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int g, n;
    cin >> g >> n;

    vector<coord> grazings(g);
    for (coord& grazing : grazings)
        cin >> grazing.x >> grazing.y >> grazing.t;

    sort(grazings.begin(), grazings.end(), [](const coord& a, const coord& b) { return a.t < b.t; });

    int innocent = 0;
    for (int i = 0; i < n; i++) {
        coord alibi;
        cin >> alibi.x >> alibi.y >> alibi.t;
        auto itr = upper_bound(grazings.begin(), grazings.end(), alibi, [](auto a, auto b) { return a.t < b.t; });

        if (itr == grazings.begin()) {
            innocent += !is_feasible(*itr, alibi);
        } else if (itr == grazings.end()) {
            innocent += !is_feasible(*prev(itr), alibi);
        } else {
            bool test1 = is_feasible(*itr, alibi);
            bool test2 = is_feasible(*prev(itr), alibi);
            innocent += !test1 || !test2;
        }
    }

    cout << innocent;

    return 0;
}
