#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    bool upper_exists = false, lower_exists = false;
    for(char c : s) {
        if(isupper(c)) upper_exists = true;
        if(islower(c)) lower_exists = true;
    }

    bool unique = true;
    map<char, int> m;
    for(int i = 0; i < s.size(); i++) {
        if(m.find(s[i]) == m.end())
            m.insert(make_pair(s[i], 1));
        else
            unique = false;
    }

    cout << (upper_exists && lower_exists && unique ? "Yes" : "No");

    return 0;
}