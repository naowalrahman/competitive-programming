#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("triangles.in");
    ofstream cout("triangles.out");

    int n, x, y; cin >> n;
    vector<pair<int, int>> coords;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        coords.push_back(make_pair(x, y));
    }

    int max_area = 0;
    pair<int, int> c1, c2, c3;
    for(int src = 0; src < n; src++) {
        for(int px = 0; px < n; px++) {
            for(int py = 0; py < n; py++) {
                if(src == px || src == py || px == py) continue;
                c1 = coords[src], c2 = coords[px], c3 = coords[py];     
                if(c1.second == c2.second && c1.first == c3.first)
                    max_area = max(max_area, abs((c2.first - c1.first) * (c3.second - c1.second)));
            }
        }
    }

    cout << max_area;    
    return 0;
}