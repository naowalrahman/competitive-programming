/**
 * @file alchemy.cpp
 * @author Naowal Rahman
 * @date 2022-10-01 12:19
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
    // dbg();
    

    int n; cin >> n;
    vi have(n);
    for(auto&x:have) cin >> x;
    int k, L, M, x; cin >> k;
    vector<vi> need(n);
    while(k--) {
        cin >> L >> M;
        L--;
        need[L].resize(M);
        FOR(i, 0, M) {
            cin >> need[L][i];
            need[L][i]--;
        }    
    }

    int nmade = 0, take;
    while(true) {
        vi consume(n);
        consume[n-1]++;
        bool ok = true;
        
        for(int i = n-1; i >= 0; i--) {
            if(consume[i] <= have[i]) {
                have[i] -= consume[i];
                continue;
            }
            if(need[i].size() == 0) {
                ok = false;
                break;
            }

            take = min(consume[i], have[i]);
            consume[i] -= take;
            have[i] -= take;
            for(int a : need[i]) consume[a] += consume[i];
        }
        
        if(ok) nmade++;
        else break;
    }

    cout << nmade;

    return 0;
}