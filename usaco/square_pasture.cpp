#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("square.in");
    ofstream cout("square.out");

    struct Rect {
        int x1, y1, x2, y2;
    };

    Rect a, b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    auto bl = make_pair(min(a.x1, b.x1), min(a.y1, b.y1));
    auto tr = make_pair(max(a.x2, b.x2), max(a.y2, b.y2));

    int ls = max(tr.second - bl.second, tr.first - bl.first);
    cout << ls * ls;

    return 0;
}