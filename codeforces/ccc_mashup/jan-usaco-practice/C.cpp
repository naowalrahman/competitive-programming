// C - Bogosort
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        vector<int> a(n);
        for(auto&x:a) cin >> x;

        sort(a.begin(), a.end(), greater<int>());
        for(int i : a) cout << i << " ";
        cout << "\n";
    }
}