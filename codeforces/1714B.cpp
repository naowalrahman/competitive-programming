/**
 * @author      : Naowal Rahman
 * @created     : 08/01/2022 12:44:11 PM
 * @filename    : B
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi a(n); 
        for(auto&x:a) cin >> x;

        vector<bool> visited(n+10);

        int num_moves = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(!visited[a[i]]) {
                visited[a[i]] = true;
                num_moves++;
            }
            else break;
        }
        cout << n - num_moves << "\n";
        
    }

    return 0;
}


