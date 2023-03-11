/**
 * @file hoof_paper_scissors.cpp
 * @author Naowal Rahman
 * @date 2023-03-10 23:09
 */

#include <bits/stdc++.h>
using namespace std;

const int H = 0, P = 1, S = 2;

int maxWins(int i, vector<vector<int>>& pfx, vector<vector<int>>& sfx) {
    int pw = max(pfx[H][i], max(pfx[P][i], pfx[S][i]));
    int sw = max(sfx[H][i], max(sfx[P][i], sfx[S][i]));
    return pw + sw;
}

int main() {
    ifstream cin("hps.in");
    ofstream cout("hps.out");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    char c;
    vector<int> fj(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> c;
        fj[i] = (c == 'H' ? H : c == 'P' ? P : S);
    }

    int j;
    vector<vector<int>> pfx(3, vector<int>(n+1)), sfx(3, vector<int>(n+1));
    for(int i = 1; i <= n; i++) {
        pfx[H][i] = pfx[H][i-1] + (fj[i] == H ? 1 : 0);
        pfx[P][i] = pfx[P][i-1] + (fj[i] == P ? 1 : 0);
        pfx[S][i] = pfx[S][i-1] + (fj[i] == S ? 1 : 0);

        j = n-i;
        sfx[H][j] = sfx[H][j+1] + (fj[j+1] == H ? 1 : 0);
        sfx[P][j] = sfx[P][j+1] + (fj[j+1] == P ? 1 : 0);
        sfx[S][j] = sfx[S][j+1] + (fj[j+1] == S ? 1 : 0);
    }

    int ans = 0;
    for(int i = 0; i <= n; i++)
        ans = max(ans, maxWins(i, pfx, sfx));
        
    cout << ans;

    return 0;
}