#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // find coordinates of 2 'o' & subtract x's & y's
    int h, w; cin >> h >> w;
    vs rows(h); 
    for(auto&x : rows) cin >> x;
    pair<int, int> f, s;
    
    bool found_once = false;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(rows[i][j] == 'o' && !found_once) {
                f = make_pair(i, j);
                found_once = true;
            }
            else if(rows[i][j] == 'o') {
                s = make_pair(i, j);
            }
        }
    }

    cout << abs(f.first - s.first) + abs(f.second - s.second);

    return 0;
}