/**
 * @file 1691B.cpp
 * @author Naowal Rahman
 * @date 2022-06-18 16:17
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

template <typename T>
vector <T> range(T N1, T N2) {
    vector<T> numbers(N2-N1);
    iota(numbers.begin(), numbers.end(), N1);
    return numbers;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi sizes(n);
        for(auto& x : sizes) cin >> x;
        vi perm = range(1, n+1);

        bool ok = true;
        int l = 0, r = 0;
        while(r < n) {
            while(r < n - 1 && sizes[r] == sizes[r+1]) r++;
            if(l == r) ok = false;
            else rotate(perm.begin()+l, perm.begin()+r, perm.begin()+r+1);
            l =  r + 1;
            r++;
        }

        if(ok) {
            for(auto& x : perm) cout << x << " ";
        }
        else cout << -1;  
        cout << "\n";
    }

    return 0;
}