#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s; 
    int upper_cnt = 0;
    int lower_cnt = 0;
    for(char c : s) {
        if(isupper(c)) upper_cnt++;
        else lower_cnt++;
    }
    if(upper_cnt > lower_cnt) {
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }
    cout << s; 
    return 0;
}