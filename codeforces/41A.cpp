/**
 * @author      : Naowal Rahman (naowal.ar@gmail.com)
 * @created     : 05/29/2022 1:52:33 PM
 * @filename    : 41A
 */

#include <bits/stdc++.h>
using namespace std;
using ll = int64
#define readv(a) for(auto&x:a)cin>>x;
#define vi vector<ll>
#define vs vector<string>
#define vc vector<char>
#define si set<int>
#define sc set<char>
#define mii map<int, int>
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, w;
    cin >> s >> w;
    reverse(all(s));
    cout << (s == w ? "YES" : "NO");

    return 0;
}

