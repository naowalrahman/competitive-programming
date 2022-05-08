#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream cin("word.in");
    ofstream cout("word.out");

    int n, k, cl = 0; cin >> n >> k;
    vs words(n);
    for(auto& w : words) cin >> w;
    string ans = "";

    for(int i = 0; i < n; i++) {
        int wl = words[i].size();
        if(cl + wl <= k) {
            cl += wl;
            ans += words[i] + " ";
        }
        else {
            ans.erase(ans.end() - 1);
            cl = wl;
            ans += "\n" + words[i] + " ";            
        }
    }

    ans.erase(ans.end() - 1);
    cout << ans;

    return 0;
}