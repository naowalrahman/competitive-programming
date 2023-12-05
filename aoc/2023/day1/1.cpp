/**
 * @author      : Naowal Rahman
 * @created     : 12/01/2023 01:47:13 PM
 * @filename    : 1
 */

#include <bits/stdc++.h>
#include <cctype>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
template<class T> using V = vector<T>;
using vi = V<int>;
using vpi = V<pii>;
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)
#define ROF(i, s, e) for(int i = (e)-1; i >= s; i--)
#define ROFE(i, s, e) for(int i = (e); i >= s; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    ifstream cin("1.in");

    string s;
    int ans = 0;
    while(cin >> s) {
        vector<char> v;
        for(char c : s) {
            if(isdigit(c)) v.push_back(c);
        }
        string s2 = "";
        s2 += v.front();
        s2 += v.back();
        ans += stoi(s2);
    }

    cout << ans;

    return 0;
}

