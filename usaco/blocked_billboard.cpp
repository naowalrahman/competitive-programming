#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("billboard.in");
    ofstream cout("billboard.out");

    struct Rect {
        int bl_x, bl_y, tr_x, tr_y;
        int area() {
            return (tr_x - bl_x) * (tr_y - bl_y);
        }
    };

    Rect b1, b2, truck;
    cin >> b1.bl_x >> b1.bl_y >> b1.tr_x >> b1.tr_y;
    cin >> b2.bl_x >> b2.bl_y >> b2.tr_x >> b2.tr_y;
    cin >> truck.bl_x >> truck.bl_y >> truck.tr_x >> truck.tr_y;

    auto inter = [&](Rect a, Rect b) {
        return max(0, min(a.tr_x, b.tr_x) - max(a.bl_x, b.bl_x)) *
               max(0, min(a.tr_y, b.tr_y) - max(a.bl_y, b.bl_y));
    };

    int total_inter = inter(b1, truck) + inter(b2, truck);
    cout << b1.area() + b2.area() - total_inter;

    return 0;
}