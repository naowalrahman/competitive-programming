#include <bits/stdc++.h>
using namespace std;
#define vector<int> vi

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vi p; vi q; 
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];
    int min1 = *min_element(p), min2 = *min_element(q);
    cout << abs(min1 - min2);

    return 0;
}