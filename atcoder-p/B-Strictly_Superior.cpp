#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, m; cin >> n >> m;
    vector<int> p(n);
    vector<vector<int>> functions(n);
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        int c; cin >> c;
        functions[i] = vector<int>(c);
        for(int j = 0; j < c; j++) cin >> functions[i][j];
        sort(functions[i].begin(), functions[i].end());
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            bool c1 = false, c2 = false, c3 = false;

            c1 = p[i] >= p[j];

            vector<int> dif(sz(functions[i]) + sz(functions[j]));
            auto it = set_difference(functions[i].begin(), functions[i].end(), functions[j].begin(), functions[j].end(), dif.begin());
            dif.resize(it - dif.begin());

            c2 = sz(dif) == 0;

            if(p[i] > p[j]) c3 = true;
            else {
                vector<int> dif2(sz(functions[i]) + sz(functions[j]));
                auto it2 = set_difference(functions[j].begin(), functions[j].end(), functions[i].begin(), functions[i].end(), dif2.begin());
                dif2.resize(it2 - dif2.begin());
                c3 = sz(dif2) > 0;
            }

            if(c1 && c2 && c3) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";    
    return 0;
}