#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    string s; cin >> s;
    string ms = ""; 
    int len = s.size();
    for(int i = 0; i < 1e2; i++) {
        ms = ms + "oxx";
    }
    int msSize = ms.size();
    bool done = false;
    for(int i = 0; i < msSize; i++) {
        string ns = ms.substr(i, len);
        if(ns == s) {
            cout << "Yes";
            done = true;
            return 0;
        }
    }
    if(!done) {
        cout << "No";
        return 0;
    }
}