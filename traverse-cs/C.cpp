/**
 * @file B.cpp
 * @author Naowal Rahman
 * @date 2022-06-19 12:07
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
        int n; cin >> n;
        vi arr(n); for(auto&x:arr) cin >> x;

        vi p1(arr.begin(), arr.begin() + n / 2);
        vi p2(arr.begin() + n / 2, arr.end());
        if(n % 2 == 1) {
            p2.erase(p2.begin());
        }

        int size1 = p1.size(), size2 = p2.size();
        map<int, int> mp1, mp2;
        FOR(i, 0, size1) {
            if(mp1.find(p1[i]) != mp1.end()) mp1[p1[i]]++;
            else mp1[p1[i]] = 1;
        }
        FOR(i, 0, size2) {
            if(mp2.find(p2[i]) != mp2.end()) mp2[p2[i]]++;
            else mp2[p2[i]] = 1;
        }

        int size_copy = size2;

        set<int> u1(p1.begin(), p1.end()), u2(p2.begin(), p2.end());
        bool ok = true;
        for(int num : u1) {
            if(size2 - mp2[num] < mp1[num]) ok = false;
            size2 -= mp2[num];
        }
        if(u1 == u2 && size_copy == 2) cout << "YES\n";
        else if(ok) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}