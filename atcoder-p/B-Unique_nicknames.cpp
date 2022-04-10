#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<string> firstNames(n);
    vector<string> lastNames(n);
    for(int i = 0; i < n; i++) {
        string fn, ln; cin >> fn >> ln;
        firstNames[i] = fn;
        lastNames[i] = ln;
    }

    string ans1 = "Yes";
    string ans2 = "Yes";

    for(int i = 0; i < n - 1; i++) {
        for(int j = 1; j < n; j++) {
            if(i != j) {
                if(firstNames[i] == firstNames[j] or firstNames[i] == lastNames[j]){
                    ans1 = "No";
                }
                if(lastNames[i] == firstNames[j] or lastNames[i] == lastNames[j]){
                    ans2 = "No";
                }
            }
        }
    }  

    if(ans1 == "No" and ans2 == "No") cout << "No";
    else cout << "Yes";


    return 0;
}