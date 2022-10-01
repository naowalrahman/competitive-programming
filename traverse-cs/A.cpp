/**
 * @file A.cpp
 * @author Naowal Rahman
 * @date 2022-06-19 12:02
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, i; cin >> n >> k >> i;
    if(n>=i) cout << "ICE CREAM";
    else if(n+k>=i) cout << "DRINK WATER";
    else cout << "CANNOT EAT";

    return 0;
}