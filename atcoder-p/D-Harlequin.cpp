/**
 * @author      : Naowal Rahman (naowal.ar@gmail.com)
 * @created     : 05/30/2022 1:09:25 AM
 * @filename    : solution
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define readv(a) for(auto&x:a)cin>>x
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

    int n; cin >> n;
    vi a(n);
    readv(a);
    bool all_even = true;
    for(int x : a) {
	    if(x % 2 == 1) all_even = false;
    }
    cout << (all_even ? "second" : "first");

    return 0;
}
