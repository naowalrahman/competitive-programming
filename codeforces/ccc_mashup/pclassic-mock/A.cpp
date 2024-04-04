#include <bits/stdc++.h>
using namespace std;

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

    int n; cin >> n;
    vi a(n);
    for(auto&x:a) cin >> x;
    int bottom1;
    FOR(i, 1, n) {
        if(a[i] > a[i-1]) {
            bottom1 = i;
            break;
        }
    }

    int inc1;
    FOR(i, bottom1 + 1, n) {
        if(a[i] < a[i - 1]) {
            inc1 = i;
            break;
        }
    }

    int bottom2;
    FOR(i, inc1 + 1, n) {
        if(a[i] > a[i-1]) {
            bottom2 = i;
            break;
        }
    }
    
    cout << max(a[bottom1 - 1], a[bottom2 - 1]);

    return 0;
}

