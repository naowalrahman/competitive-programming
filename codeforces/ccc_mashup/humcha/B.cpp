/**
 * @file B.cpp
 * @author Naowal Rahman
 * @date 2024-05-27 14:13
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<int> a(n);
    for(auto&x:a) cin >> x;

    for(int i = 0; i < n; i++) cout << i + 1 << " " << a[i] << "\n";
    

    return 0;
}
