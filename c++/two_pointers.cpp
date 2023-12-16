#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int) x.size()
#define int long long

void mergingArrays() {
    int n, m; cin >> n >> m;
    vector<int> v1(n), v2(m);
    for(auto&x:v1) cin >> x;
    for(auto&x:v2) cin >> x;
    
    vector<int> arr(n + m);

    int i = 0, j = 0, k = 0;
    while(i < n || j < m) {
        if(j == m || i < n && v1[i] < v2[j]) {
            arr[k] = v1[i];
            i++;
        } 
        else {
            arr[k] = v2[j];
            j++;
        }
        k++;
    }

    for(int x : arr) cout << x << " ";
}

void numberOfSmaller() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), ans(m);
    for(auto&x:a) cin >> x;
    for(auto&x:b) cin >> x;

    int i = 0;
    for(int j = 0; j < m; j++) {
        while(i < n && a[i] < b[j]) i++;
        ans[j] = i;
    }

    for(int x : ans) cout << x << " ";
}

void numberOfEqual() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto&x:a) cin >> x;
    for(auto&x:b) cin >> x;

    int i = 0, ans = 0, prev_equal; 
    for(int j = 0; j < m; j++) {
        if(j != 0 && b[j] == b[j-1]) {
            ans += prev_equal;
            continue;
        }
        int num_equal = 0;
        while(a[i] < b[j]) i++;
        while(i < n && a[i] == b[j]) {
            i++;
            num_equal++;
        }
        ans += num_equal;
        prev_equal = num_equal;
    }

    cout << ans;
}

signed main() {
    numberOfEqual();
    return 0;
}