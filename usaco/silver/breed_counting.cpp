/**
 * @author      : Naowal Rahman
 * @created     : 03/08/2023 11:23:29 AM
 * @filename    : breed_counting
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream cin("bcount.in");
    ofstream cout("bcount.out");

    int n, q;
    cin >> n >> q;
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<int> p1(n + 1), p2(n + 1), p3(n + 1);
    for (int i = 1; i <= n; i++) {
        if (b[i] == 1) {
            p1[i] = p1[i - 1] + 1;
            p2[i] = p2[i - 1];
            p3[i] = p3[i - 1];
        } else if (b[i] == 2) {
            p1[i] = p1[i - 1];
            p2[i] = p2[i - 1] + 1;
            p3[i] = p3[i - 1];
        } else {
            p1[i] = p1[i - 1];
            p2[i] = p2[i - 1];
            p3[i] = p3[i - 1] + 1;
        }
    }

    int x, y;
    while (q--) {
        cin >> x >> y;
        cout << p1[y] - p1[x - 1] << " " << p2[y] - p2[x - 1] << " "
             << p3[y] - p3[x - 1] << "\n";
    }

    return 0;
}
