#include <bits/stdc++.h>
using namespace std;

bool presentInSome(vector<string>& genomes, char gene, int pos) {
    bool present = false;
    for(int i = 0; i < genomes.size(); i++) {
        if(genomes[i][pos] == gene) {
            present = true;
            break;
        }
    }
    return present;
}

bool possibleCause(vector<string>& spotty, vector<string>& plain, int pos) {
    set<char> presentInSpotty, presentInPlain;
    for(char c : {'A', 'C', 'G', 'T'}) {
        if(presentInSome(spotty, c, pos)) presentInSpotty.insert(c);
        if(presentInSome(plain, c, pos)) presentInPlain.insert(c);
    }

    vector<char> common;
    set_intersection(presentInSpotty.begin(), presentInSpotty.end(),
                     presentInPlain.begin(), presentInPlain.end(), 
                     back_inserter(common));
    return common.empty();
}

int main() {
    ifstream cin("cownomics.in");
    ofstream cout("cownomics.out");

    int n, m; cin >> n >> m;
    vector<string> spotty(n), plain(n);
    for(auto&x:spotty) cin >> x;
    for(auto&x:plain) cin >> x;

    int ans = 0;
    for(int i = 0; i < m; i++)
        ans += (int) possibleCause(spotty, plain, i);

    cout << ans;
    return 0;
}