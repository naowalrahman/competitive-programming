#include <bits/stdc++.h>
using namespace std;

// works if you are given the length of the array
int main() { 
    /* 
    run for loop with value of n, the cin into
    v[i]. This works because C++ interprets spaces
    as separators between inputs, just like it
    does for newlines.
    */
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // testing
    for(int i : v) cout << i << " -> ";
    return 0;
}