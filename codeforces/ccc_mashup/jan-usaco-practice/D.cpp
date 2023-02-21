// D - Code obfuscation
#include <bits/stdc++.h>
using namespace std;
 
int main () {
    string s; cin >> s;
 
    string uniqueChars = "";
    vector<bool> seen(26, false);
    for(char c : s) {
        if(!seen[c - 'a']) {
            uniqueChars += c;
            seen[c - 'a'] = true;
        }
    }

    string letters = "abcdefghijklmnopqrstuvwxyz";
    cout << (letters.substr(0, uniqueChars.size()) == uniqueChars ? "YES" : "NO");
 
}