#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s = "";
        if(n % 3 == 1) {
            while(n > 0) {
                s += "1";
                n--; 
                if(n > 0) {
                    s += "2";
                    n -= 2;
                }
            }
        }
        else {
            while(n > 0) {
                s += "2";
                n -= 2; 
                if(n > 0) {
                    s += "1";
                    n--;
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}