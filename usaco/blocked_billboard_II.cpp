#include <bits/stdc++.h>
using namespace std;

bool covered(int x, int y, int x1, int y1, int x2, int y2) {
    return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream cin("billboard.in");
    ofstream cout("billboard.out");

    struct Rect {
        int bl_x, bl_y, tr_x, tr_y, height, width;
        int area() {
            return height * width;
        }
    };

    Rect lm, cf;
    cin >> lm.bl_x >> lm.bl_y >> lm.tr_x >> lm.tr_y;
    cin >> cf.bl_x >> cf.bl_y >> cf.tr_x >> cf.tr_y;
    lm.height = lm.tr_y - lm.bl_y;
    lm.width = lm.tr_x - lm.bl_x;

    int iheight = min(lm.tr_y, cf.tr_y) - max(lm.bl_y, cf.bl_y);
    int iwidth = min(lm.tr_x, cf.tr_x) - max(lm.bl_x, cf.bl_x);
    int iarea = iheight * iwidth;

    int num_covered = 0;
    if(covered(lm.bl_x, lm.bl_y, cf.bl_x, cf.bl_y, cf.tr_x, cf.tr_y)) num_covered++;
    if(covered(lm.tr_x, lm.bl_y, cf.bl_x, cf.bl_y, cf.tr_x, cf.tr_y)) num_covered++;
    if(covered(lm.bl_x, lm.tr_y, cf.bl_x, cf.bl_y, cf.tr_x, cf.tr_y)) num_covered++;
    if(covered(lm.tr_x, lm.tr_y, cf.bl_x, cf.bl_y, cf.tr_x, cf.tr_y)) num_covered++;
    
    if(num_covered < 2) cout << lm.area();
    else if(num_covered == 4) cout << 0;
    else cout << lm.area() - iarea;

    return 0;
}