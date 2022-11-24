/**
 * @file countin_liars.cpp
 * @author Naowal Rahman
 * @date 2022-11-24 16:47
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
    vector<char> dir(n); vi pos(n);
    char cd; int cp;
    FOR(i, 0, n) {
        cin >> cd >> cp;
        dir[i] = cd; pos[i] = cp;
    }

    int ans = INT_MAX, num_bad;
    FOR(i, 0, n) {
        num_bad = 0;
        FOR(j, 0, n) {
            if((dir[j] == 'G' && pos[i] < pos[j]) || (dir[j] == 'L' && pos[i] > pos[j])) num_bad++;
        } 
        ans = min(ans, num_bad);
    }
    
    cout << ans;

    return 0;
}