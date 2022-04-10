#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    vector<char> str;
    str.push_back('0');
    str.push_back(s[0]);
    str.push_back(s[1]);
    str.push_back(s[2]);

    for(int i = 0; i < 4; i++) cout << str[i];

    return 0;
}