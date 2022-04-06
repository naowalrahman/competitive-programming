#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int n = s.size();
    vector<int> v(5);

    for(int i = 0; i < n; i++) {
        if(s[i] == 'h') {
            s = s.substr(i + 1);
            v[0] = 1;
            break;
        }
    }
    n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == 'e') {
            s = s.substr(i + 1);
            v[1] = 1;
            break;
        }
    }
    n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == 'l') {
            s = s.substr(i + 1);
            v[2] = 1;
            break;
        }
    }
    n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == 'l') {
            s = s.substr(i + 1);
            v[3] = 1;
            break;
        }
    }
    n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == 'o') {
            s = s.substr(i + 1);
            v[4] = 1;
            break;
        }
    }
    
    for(int i = 0; i < 5; i++) {
        if(v[i] == 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
