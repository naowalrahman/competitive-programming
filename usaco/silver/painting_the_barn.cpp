/**
 * @author      : Naowal Rahman
 * @created     : 03/08/2023 10:17:38 AM
 * @filename    : painting_the_barn
 */

#include <bits/stdc++.h>
using namespace std;

const int WIDTH = 1000;
int barn[WIDTH][WIDTH], pfx[WIDTH][WIDTH];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream cin("paintbarn.in");
    ofstream cout("paintbarn.out");

    int n, k;
    cin >> n >> k;
    int x1, y1, x2, y2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        barn[x1][y1]++;
        barn[x1][y2]--;
        barn[x2][y1]--;
        barn[x2][y2]++;
    }

    int ans = 0;
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < WIDTH; j++) {
            pfx[i][j] = barn[i][j];
            if (i)
                pfx[i][j] += pfx[i - 1][j];
            if (j)
                pfx[i][j] += pfx[i][j - 1];
            if (i && j)
                pfx[i][j] -= pfx[i - 1][j - 1];
            if (pfx[i][j] == k)
                ans++;
        }
    }

    cout << ans;

    return 0;
}
