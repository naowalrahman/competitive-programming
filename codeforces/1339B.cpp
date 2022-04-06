#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
 
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> answer;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int>rev_a(a.rbegin(), a.rend());
 
        if(n % 2 == 0) {
            for(int i = 0; i < n / 2; i++){
                answer.push_back(rev_a[i]);
                answer.push_back(a[i]);
            }   
        } 
        else {
            for(int i = 0; i < n / 2 + 1; i++){
                if(i == n / 2) answer.push_back(rev_a[i]);
                else {
                    answer.push_back(rev_a[i]);
                    answer.push_back(a[i]);
                }
            }
        }
        reverse(answer.begin(), answer.end());
        for(int i = 0; i < n; i++) {
            cout << answer[i] << " ";
        }
        cout << "\n";
 
    }
    return 0;
}