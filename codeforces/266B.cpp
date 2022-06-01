#include <bits/stdc++.h>
using namespace std;
#define vc vector<char>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t; cin >> n >> t;
    string s; cin >> s;
    vc line(s.begin(), s.end());
    while(t--) {
        int i = 0;
        while(i < n - 1) {
            if(line[i] == 'B' && line[i+1] == 'G') {
                line[i] = 'G';
                line[i+1] = 'B';
                i += 2;
            }
            else {
                i++;
            }
        }
    }

    for(char c : line) cout << c;

    return 0;
} 