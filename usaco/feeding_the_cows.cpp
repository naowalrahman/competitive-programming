#include <bits/stdc++.h>
using namespace std;

bool overlap(pair<int, int> r1, pair<int, int> r2) {
    return (r1.first <= r2.second && r2.first <= r1.second);
}

pair<int, int> intersect(pair<int, int> r1, pair<int, int> r2) {
    return make_pair(max(r1.first, r2.first), min(r1.second, r2.second));
}

int main() {
    // ofstream cout("p2.out");
    int t, n, k; cin >> t; 
    string cows;

    int start, end;
    while(t--) {
        cin >> n >> k;
        cin >> cows;

        vector<pair<int, int>> Granges, Hranges;
        for(int i = 0; i < n; i++) {
            pair<int, int> cr = make_pair(max(0, i-k), min(n-1, i+k));
            if(cows[i] == 'G') {
                if(Granges.size() == 0) Granges.push_back(cr);
                else {
                    int gdx = Granges.size()-1;
                    if(overlap(Granges[gdx], cr))
                        Granges[gdx] = intersect(Granges[gdx], cr);
                    
                    else Granges.push_back(cr);
                }
            }
            else {
                if(Hranges.size() == 0) Hranges.push_back(cr);
                else {
                    int hdx = Hranges.size()-1;
                    if(overlap(Hranges[hdx], cr))
                        Hranges[hdx] = intersect(Hranges[hdx], cr);
                    
                    else Hranges.push_back(cr);
                }
            }
        }

        vector<char> ans(n, '.');
        for(int i = 0; i < Granges.size(); i++) {
            ans[Granges[i].first] = 'G';
        }
        for(int i = 0; i < Hranges.size(); i++) {
            for(int j = Hranges[i].first; j <= Hranges[i].second; j++) {
                if(ans[j] != 'G') {
                    ans[j] = 'H';
                    break;
                }
            }
        }

        cout << Granges.size() + Hranges.size() << "\n";
        for(char c : ans) cout << c;
        cout << "\n";
        
    }

    return 0;
}