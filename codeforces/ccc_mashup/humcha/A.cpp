/**
 * @file A.cpp
 * @author Naowal Rahman
 * @date 2024-05-27 14:06
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int&x:a) cin >> x;

        int height = 1 + a[0];
        for(int i = 1; i < n; i++) {
            if(a[i] == 1) height += (a[i-1] == 1 ? 5 : 1);
            else if(a[i] == 0 && a[i-1] == 0) {
                height = -1;
                break;
            }
        }

        cout << height << "\n";
    }

    return 0;
}
