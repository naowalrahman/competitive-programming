/**
 * @file D.cpp
 * @author Naowal Rahman
 * @date 2024-03-25 16:13
 */

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "/home/naowal/Desktop/code/competitive-programming/debug.h"
#else
#define dbg(x)
#endif

#define int long long
template<class T> using V = vector<T>;
using vi = V<int>;
using pii = pair<int, int>;
#define sz(x) (int)((x).size())
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)

template<class T> bool ckmin(T& a, const T& b) {
    return b < a ? a = b, 1 : 0; } // set a = min(a,b)
template<class T>  bool ckmax(T& a, const T& b) {
    return a < b ? a = b, 1 : 0; } // set a = max(a,b)

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, fmax, smax;
    cin >> n >> fmax >> smax;
    V<array<int, 3>> diff(n);
    F0R(i, n) {
        cin >> diff[i][1] >> diff[i][2];
        diff[i][0] = diff[i][1] - diff[i][2];        
    }

    V<array<int, 3>> good_f, good_s, good_any;
    for(auto a : diff) {
        if(a[1] <= 0 && a[2] <= 0) continue;
        if(a[0] > 0) good_f.push_back(a);
        else good_s.push_back(a);
    }

    sort(all(good_f), [](auto& a, auto& b) -> bool {
        return a[0] > b[0];
    });
    sort(all(good_s), [](auto& a, auto& b) -> bool {
        return a[0] < b[0];
    });

    int ans = 0;
    int i = 0;
    while(i < n && fmax > 0) {
        ans += diff[i][1]; 
        ++i;
        --fmax;
    }

    // sort(all(diff), [](auto& a, auto& b) -> bool {
    //     return a[0] > b[0]; 
    // });
    //
    // dbg(diff);
    //
    // int ans = 0;
    // int i = 0, f_used = 0;
    // while(i < n && f_used < fmax && diff[i][0] > 0) {
    //     ans += diff[i][1]; 
    //     ++f_used;
    //     ++i;
    // }
    // int j = n - 1, s_used = 0;
    // while(j >= 0 && s_used < smax && diff[j][0] < 0) {
    //     ans += -diff[j][2];
    //     ++s_used;
    //     j--;
    // }

    cout << ans;

    return 0;
}
