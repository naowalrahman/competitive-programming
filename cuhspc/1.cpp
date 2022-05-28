#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
     
    string s1 = "";
    string s2 = "";
    for(int i = 0; i < n; i++) {
        string x; cin >> x;
        if(x == "life") s1 += "0";
        else if(x == "heaven") s1 += "1";
        else s1 += "2";
    }
    for(int i = 0; i < m; i++) {
        string x; cin >> x;
        if(x == "life") s2 += "0";
        else if(x == "heaven") s2 += "1";
        else s2 += "2";
    }    
    int v1 = 0, v2 = 0;
    int exp = n - 1;
    for(int i = 0; i < n; i++) {
        v1 += ((int)s1[i] - 48) * pow(3, exp);
        exp--;
    }
    exp = m - 1;
    for(int i = 0; i < m; i++) {
        v2 += ((int)s2[i] - 48) * pow(3, exp);
        exp--;
    }

    int b10 = v1 + v2;
    int tmp = b10;
    string b3 = "";
    while(tmp > 0) {
        b3 = to_string(tmp % 3) + b3; 
        tmp /= 3;
    }
    string ans = "";
    for(int i = 0; i < b3.length(); i++) {
        if(b3[i] == '0') ans += "life ";
        if(b3[i] == '1') ans += "heaven ";
        if(b3[i] == '2') ans += "earth ";
    }
    for(int i = 0; i < ans.size() - 1; i++) {
        cout << ans[i];
    }
    return 0;
}