#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s; 
        if(s == "0" || s == "1" || s == "01" || s == "10") cout << "YES\n"; 
        else cout << "NO\n";
    }

    return 0;
}