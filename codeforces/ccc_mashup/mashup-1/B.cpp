/**
 * @author      : Naowal Rahman
 * @created     : 08/17/2022 11:41:00 AM
 * @filename    : B
 */

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define FOR(i, s, e) for(int i = s; i < e; i++)
#define FORE(i, s, e) for(int i = s; i <= e; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ns, ctn; cin >> n; 
    string num;
    FOR(i, 0, n) {
        int num0 = 0, nume = 0; 
        cin >> num;
        ns = 0;
        for(char c : num) {
            ctn = c - 48;
            ns += ctn;
            if(ctn == 0) num0++;
            else if(ctn % 2 == 0) nume++;
        }

        if((num0 >= 2 || (num0 >= 1 && nume >= 1)) && ns % 3 == 0) cout << "red\n";
        else cout << "cyan\n";
    }

    return 0;
}

