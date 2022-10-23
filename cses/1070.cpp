#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    if(n == 1) {
        cout << n;
        return 0;
    }
    else if( n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    else if(n == 4) {
        cout << "2 4 1 3";
        return 0;
    }

    vi a(n);
    for(int i = 0; i < n; i++)
        a[i] = i + 1;

    vi bp;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 1)
            cout << a[i] << " ";
        else
            bp.push_back(a[i]);
    }

    for(int i = 0; i < bp.size(); i++)
        cout << bp[i] << " ";

    return 0;
}