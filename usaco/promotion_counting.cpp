#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define nl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("promote.in");
    ofstream cout("promote.out");

    vi posb(4), posa(4), ans(3);
    for(int i = 0; i < 4; i++)
        cin >> posb[i] >> posa[i]; 

    ans[0] += posa[1] - posb[1] + 
              posa[2] - posb[2] +
              posa[3] - posb[3];

    ans[1] += posa[2] - posb[2] +
              posa[3] - posb[3];

    ans[2] += posa[3] - posb[3];

    for(int i : ans)
        cout << i << nl;

    return 0;
}