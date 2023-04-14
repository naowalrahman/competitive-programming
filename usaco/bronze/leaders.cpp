#include <bits/stdc++.h>
using namespace std;

int n;
string cows;

int findLastOccurrence(char breed) {
    for(int i = n-1; i >= 0; i--) {
        if(cows[i] == breed) return i;
    }
    return -1;
}

int findFirstOccurrence(char breed) {
    for(int i = 0; i < n; i++) {
        if(cows[i] == breed) return i;
    }
    return -1;
}

int main() {
    cin >> n >> cows;
    vector<int> E(n);
    for(auto&x:E) cin >> x;

    int firstG = findFirstOccurrence('G');
    int firstH = findFirstOccurrence('H');
    int lastG = findLastOccurrence('G');
    int lastH = findLastOccurrence('H');
    int hasAllG, hasAllH;
    vector<int> leaderCow;
    for(int i = 0; i < n; i++) {
        if(cows[i] == 'G' && i == firstG && E[i]-1 >= lastG) {
            hasAllG = i;
            leaderCow.push_back(i);
        }
        else if(cows[i] == 'H' && i == firstH && E[i]-1 >= lastH) {
           hasAllH = i;
            leaderCow.push_back(i);
        }
    }

    for(int i = 0; i < n; i++) {
        if(cows[i] == 'G' && hasAllH > i && hasAllH < E[i])
            leaderCow.push_back(i);
        else if(cows[i] == 'H' && hasAllG > i && hasAllG < E[i])
            leaderCow.push_back(i);
    }

    int ans = 0;
    for(int i = 0; i < leaderCow.size(); i++) {
        for(int j = i+1; j < leaderCow.size(); j++) {
            if(cows[leaderCow[i]] != cows[leaderCow[j]])
                ans++;
        }
    }

    cout << ans;
}