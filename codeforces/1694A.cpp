/**
 * @file 1694A.cpp
 * @author Naowal Rahman
 * @date 2022-06-18 23:50
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a; cin >> b;
        int mn = min(a, b), mx;
        if(mn == a) mx = b; 
        else mx = a;

        FOR(i, 0, mn) cout << "01";
        if(mx == a) {
            FOR(i, 0, mx-mn) cout << "0";
        }
        else {
            FOR(i, 0, mx-mn) cout << "1";
        }

        cout << "\n";
    }

    return 0;
}