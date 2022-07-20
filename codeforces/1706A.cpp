/**
 * @file 1706A.cpp
 * @author Naowal Rahman
 * @date 2022-07-19 20:40
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
        int n, m; cin >> n >> m;
        vi a(n+1); 
        FORE(i, 1, n) cin >> a[i];
        char s[m+1];
        FORE(i, 1, m) s[i] = 'B';

        FORE(i, 1, n) {
            int mini = min(a[i], m+1-a[i]);
            int maxi = max(a[i], m+1-a[i]);
            if(s[mini] == 'B') s[mini] = 'A';
            else s[maxi] = 'A';
        }

        FORE(i, 1, m) cout << s[i];
        cout << "\n";
    } 

    return 0;
}