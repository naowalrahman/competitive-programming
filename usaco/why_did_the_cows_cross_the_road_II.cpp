#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("circlecross.in");
    ofstream cout("circlecross.out");
    
    string points; cin >> points;
    int n = points.size(), ans = 0;
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", curr, wanted1, wanted2;

    for(int i = 0; i < 26; i++) {
        for(int j = i+1; j < 26; j++) {
            curr = "";
            for(int k = 0; k < n; k++) {
                if(points[k] == letters[i] || points[k] == letters[j])
                    curr += points[k];
            }
            wanted1 = string({letters[i], letters[j], letters[i], letters[j]});
            wanted2 = string({letters[j], letters[i], letters[j], letters[i]});
            if(curr == wanted1 || curr == wanted2)
                ans++;
        }
    }

    cout << ans;
}