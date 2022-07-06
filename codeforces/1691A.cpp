#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int even = 0, odd = 0;
        vi a(n); for(auto& x:a) cin >> x;
        for(int i : a) {
            if(i % 2 == 0) even++;
            else odd++;
        }
        cout << min(even, odd) << "\n";
    }

    return 0;
}