#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int a, b;
    int curr_capacity = 0;
    int max_capacity = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        curr_capacity -= a;
        curr_capacity += b;
        max_capacity = max(max_capacity, curr_capacity);
    }

    cout << max_capacity;

    return 0;
}