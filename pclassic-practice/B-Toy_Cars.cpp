/**
 * @file B-Toy_Cars.cpp
 * @author Naowal Rahman
 * @date 2022-11-18 21:25
 */

#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
typedef long long ll;
typedef vector<int> vi;

inline void dbg() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif //
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    dbg();

    int n; cin >> n;
    vector<vi> matrix(n, vi(n));
    FOR(i, 0, n) FOR(j, 0, n) cin >> matrix[i][j];
    vector<bool> cars_ok(n);
    
    FOR(i, 0, n) FOR(j, 0, n) {
        if(matrix[i][j] != -1) {
            cars_ok[i] = !(matrix[i][j] == 1 || matrix[i][j] == 3);
            cars_ok[j] = !(matrix[i][j] == 2 || matrix[i][j] == 3);
        }
    }

    cout << count(all(cars_ok), true) << "\n";
    FOR(i, 0, n) if(cars_ok[i]) cout << i + 1 << " ";

    return 0;
}