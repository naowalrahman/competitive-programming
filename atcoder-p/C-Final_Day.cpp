#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> total_scores(n);
    for(int i = 0; i < n; i++) {
        int p1, p2, p3; cin >> p1 >> p2 >> p3;
        total_scores[i] = p1 + p2 + p3; 
    }

    vector<int> total_scores_sorted(total_scores.begin(), total_scores.end());
    sort(total_scores_sorted.begin(), total_scores_sorted.end());
    reverse(total_scores_sorted.begin(), total_scores_sorted.end());

    for(int sc : total_scores) {
        if(sc + 300 >= total_scores_sorted[k-1]) cout << "Yes\n";
        else cout << "No\n";
    }        

    return 0;
}